const kateDog = [3,5,2,12,7];
const juliaDog = [4,1,15,8,3];

const checkDog = function(kate,julia){
  const juliaDogs = julia.slice(1,juliaDog.length-2);
  const bothDataDog = kate.concat(juliaDogs);

  console.log(juliaDogs);
  console.log(juliaDog);

  bothDataDog.forEach(function(dog,i){
    if(dog>=3){
      console.log(`Dog Number ${i+1} is an adult, and is ${dog} years old`);
    }else if(dog<3){
      console.log(`Dog Number ${i+1} is still puppy 🐶`);
    }
  });
};

checkDog(kateDog,juliaDog);