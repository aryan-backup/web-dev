const gameEvents = new Map([
  [17, '⚽️ GOAL'],
  [36, '🔁 Substitution'],
  [47, '⚽️ GOAL'],
  [61, '🔁 Substitution'],
  [64, '🔶 Yellow card'],
  [69, '🔴 Red card'],
  [70, '🔁 Substitution'],
  [72, '🔁 Substitution'],
  [76, '⚽️ GOAL'],
  [80, '⚽️ GOAL'],
  [92, '🔶 Yellow card'],
]);


// // 1
const events = [...new Set(gameEvents.values())];
console.log(events);

//// 2
gameEvents.delete(64);
console.log(gameEvents);

//// 4

for (const [key,value] of gameEvents){
  // console.log(key,value);
  const str = key<=45 ? 'FIRST HALF' : key<=90 ? 'SECOND HALF' : 'EXTRA TIME';
  console.log(`[${str}] ${key}: ${value}`);
}


// // 3
// considering 100 minutes of game played

  console.log(`An event happened, on average, every ${100 / gameEvents.size} minutes`);






