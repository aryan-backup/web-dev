const Data1 = [5,2,4,1,15,8,3];
const Data2 = [16,6,10,5,6,1,4];


const calcAverageHumanAge = (ages)=> ages.map(age => age <= 2 ? 2*age : 16+4*age).filter((ageHuman)=> ageHuman > 18).reduce((acc,ag,i,ages) => acc +=ag/ages.length,0);
;

const avgHuman1=calcAverageHumanAge(Data1);
console.log(avgHuman1);
const avgHuman2=calcAverageHumanAge(Data2);
console.log(avgHuman2);
