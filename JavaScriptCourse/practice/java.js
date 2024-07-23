

//? /========================== Second Test ==============================/ //

// 'use strict';

// const fs = require('fs');

// process.stdin.resume();
// process.stdin.setEncoding('utf-8');

// let inputString = '';
// let currentLine = 0;

// process.stdin.on('data', function(inputStdin) {
//   inputString += inputStdin;
// });

// process.stdin.on('end', function() {
//   inputString = inputString.split('\n');
//   main();
// });

// function readLine() {
//   return inputString[currentLine++];
// }

// class StaffList {
//     //add your code here
//     constructor() {
//         this.staffList = [];
//     }

//     add(name, age) {
//         if (age <= 20) {
//             throw new Error('Staff member age must be greater than 20');
//         }
//         if (!this.staffList.find(i => i.name === name)) {
//             this.staffList.push({ name, age });
//         }
//     }

//     remove(name) {
//         const index = this.staffList.findIndex(i => i.name === name);
//         if (index !== -1) {
//             this.staffList.splice(index, 1);
//             return true;
//         }
//         return false;
//     }

//     getSize() {
//         return this.staffList.length;
//     }
// } 

// function main() {
//     const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
    
//     const obj = new StaffList();
//     const operationCount = parseInt(readLine().trim());
    
//     for(let i = 1; i <= operationCount; i++) {
//         const operationInfo = readLine().trim().split(' ');
//         try {
//             let res;
//             if (operationInfo[0] === 'add') {
//                 obj.add(operationInfo[1], parseInt(operationInfo[2]));
//             } else if (operationInfo[0] === 'remove') {
//                 res = obj.remove(operationInfo[1]);
//                 ws.write(`${res}\n`);
//             } else if (operationInfo[0] === 'getSize') {
//                 res = obj.getSize();
//                 ws.write(`${res}\n`);
//             }
//         } catch (e) {
//             ws.write(`${e}\n`);
//         }
//     }
//     ws.end();
// }






//?   /====================  First Test=======================/ //

'use strict';

const fs = require('fs');
const https = require('https');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

const fetch = (url) =>{
    return new Promise((resolve, reject)=>{
        https
        .get(url, (res) =>{
            let data = "";
            
            res.on('data', (chunk)=>{
                data += chunk;
            });
            
            res.on('end', ()=>{
                resolve(JSON.parse(data));
            });
        }).on('error', (err)=>{
            reject(err.message);
        });
    });
};

const getAPIURL = (year,page)=>{
    return `https://jsonmock.hackerrank.com/api/football_matches?competition=UEFA%20Champions%20League&year=${year}&page=${page}`;
};


const getFootballMatches = (year,page)=>{
    const url = getAPIURL(year,page);
    return new Promise((resolve,reject)=>{
        fetch(url)
        .then((jsonResponse)=> resolve(jsonResponse))
        .catch((e)=>reject(e.message));
    });
};


async function getTeams(year, k) {
    // write your code here
    // API endpoint template: https://jsonmock.hackerrank.com/api/football_matches?competition=UEFA%20Champions%20League&year=<YEAR>&page=<PAGE_NUMBER>
    
    const matchesPerTeam = {};
    let initialPage =1;
    let totalPages = 1;
    
    while(initialPage <= totalPages){
        const {total_pages, data: matches} = await getFootballMatches(
            year,
            initialPage,
        );
    
    
    matches.forEach(({team1,team2})=>{
        matchesPerTeam[team1] = (matchesPerTeam[team1] || 0)+1;
        
        matchesPerTeam[team2] = (matchesPerTeam[team2]||0)+1;
    });
    
    totalPages = total_pages;
    initialPage +=1;
    }
return Object.entries(matchesPerTeam).filter(([,numOfMatches])=>numOfMatches>=k)
.map(([team])=>team)
.sort();
}


async function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const year = parseInt(readLine().trim());
  const k = parseInt(readLine().trim());

  const teams = await getTeams(year, k);

  for (const team of teams) {
    ws.write(`${team}\n`);
  }
}
