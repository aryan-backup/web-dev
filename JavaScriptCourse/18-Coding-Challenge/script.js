const Data1 = [5,2,4,1,15,8,3];
const Data2 = [16,6,10,5,6,1,4];


const calcAverageHumanAge = function(ages){
  const humanAges = [];
  let avg =0;
  ages.forEach(age => {
    if(age <=2){
      let humanAge1 = 2*age;
      humanAges.push(humanAge1);
    }else if(age > 2){
      let humanAge2 = 16+4*age;
      humanAges.push(humanAge2);
    }
  });
  

  const filteredHumanAges=humanAges.filter((ageHuman)=> ageHuman > 18);
  filteredHumanAges.forEach(ag => avg += ag);

  return avg/=filteredHumanAges.length;

};

const avgHuman1=calcAverageHumanAge(Data1);
console.log(avgHuman1);
const avgHuman2=calcAverageHumanAge(Data2);
console.log(avgHuman2);
