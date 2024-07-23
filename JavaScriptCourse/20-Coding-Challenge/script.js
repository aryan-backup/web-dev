const dogs = [
  {
    weight: 22,
    curFood: 250,
    owners: ['Alice','Bob']
  },
  {
    weight: 8,
    curFood: 200,
    owners: ['Matilda']
  },
  {
    weight: 13,
    curFood: 275,
    owners: ['Sarah','John']
  },
  {
    weight: 32,
    curFood: 340,
    owners: ['Michael']
  },
];

for (const dog of dogs){
  dog.recommendedFood = Math.trunc(dog.weight ** 0.75 * 28);
}


for (const dog of dogs){
  if(dog.owners.includes('Sarah')){
    if(!(dog.recommendedFood*1.10> dog.curFood && dog.recommendedFood*0.90<dog.curFood )){
      if(dog.recommendedFood > dog.curFood){
        console.log('Sarah dogs eating too little');
      }else{
        console.log('Sarah dogs eating too much');
      }
    }
  }
}

const ownerEatTooMuch = [];
const ownerEatTooLittle = [];

dogs.forEach(function(dog){
  if(dog.recommendedFood*1.10> dog.curFood && dog.recommendedFood*0.90<dog.curFood){return;}
  if(dog.recommendedFood > dog.curFood){
    ownerEatTooLittle.push(dog);
  }else if(dog.recommendedFood < dog.curFood){
    ownerEatTooMuch.push(dog);
  }
});
const tooLittleEatingOwner=ownerEatTooLittle.flatMap(dog => dog.owners);
const tooMuchEatingOwner=ownerEatTooMuch.flatMap(dog => dog.owners);
console.log(`${tooLittleEatingOwner.join(' and ')}'s dogs eats too little`);
console.log(`${tooMuchEatingOwner.join(' and ')}'s dogs eats too much`);


console.log(dogs.some(dog=>dog.curFood === dog.recommendedFood));
console.log(dogs.some(dog=> dog.recommendedFood*1.10> dog.curFood && dog.recommendedFood*0.90<dog.curFood));

const okayAmountOfFood = dogs.filter(dog=> dog.recommendedFood*1.10> dog.curFood && dog.recommendedFood*0.90<dog.curFood);

console.log(okayAmountOfFood);

const dogCopy = dogs.slice().sort( (a,b) => a.recommendedFood - b.recommendedFood)

console.log(dogCopy);
