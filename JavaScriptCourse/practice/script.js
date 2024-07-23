/* const arr = [1,2,3,2,2,3,3,4,4,5,5,1,1];
const distinctArr = new Set(arr);
console.log(distinctArr); */


/* const map = new Map([
  ['hello','Aryan']
]
);
console.log(map); */

/* const movements = [450,-330,30,20,330];
const euroToUSD = 1.1;
const movementToUSD = movements.map((mov)=> mov * euroToUSD);
console.log(movements);
console.log(movementToUSD); */



/* const movementsUsd = [];
for (const [i,mov] of movements.entries()){
  movementsUsd.push(mov * euroToUSD);
  console.log(i,mov);
}
console.log(movementsUsd); */



/* const movementDescription = movements.map((mov,i)=>`Movement ${i+1}: You ${mov>0?'deposited':'withdrew'} ${Math.abs(mov)}`);
console.log(movementDescription); */



/* const num = 222;
const digit = num.toString().split('').map((mov)=>mov * 4);
console.log(digit); */



const movements = [200,450,-400,3000,-650,-130,70,1300];


const withdrew = movements.filter((mov)=>mov<0);
console.log(withdrew);


const withdrew2 = [];
for(const mov of movements) mov<0 ? withdrew2.push(mov): "";
console.log(withdrew2);