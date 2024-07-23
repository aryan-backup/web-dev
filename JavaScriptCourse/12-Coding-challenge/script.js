const game = {
  team1: "Bayern Munich",
  team2: "Borrussia Dortmund",
  players: [
      [
          'Manuel Neuer',
          'Harry Kane',
          'Thomas Muller',
          'Joshua Kimmich',
          'Jamal Musiala',
          'Alphonso Davies',
          'Kim Min-jae',
          'Tarek Buchmann',
          'Dayot Upamecano',
          'Eric Dier',
          'Matthjis de Ligt'
      ],
      [
          'Gregor Kobel',
          'Macro Reus',
          'Jadon Sancho',
          'Niclas Fullkrug',
          'Karim Adeyemi',
          'Mats Hummels',
          'Ian Maatsen',
          'Emre Can',
          'Sebastien Haller',
          'Nikalas Sule',
          'Julian Brandt'
      ]
  ],
  score: '4:0',
  scored: ['Thomas Muller', 'Joshua Kimmich', 'Alphonso Davies', 'Thomas Muller'],
  odds: {
      team1: 1.33,
      x: 3.25,
      team2: 6.5
  }
  }



  for (const [i,player] of game.scored.entries())
    console.log(`Goal ${i+1}: ${player}`);

  const value = Object.values(game.odds);
  let averageOdd = 0;

  for (const odd of value) averageOdd += odd;
    averageOdd /= value.length;
    console.log(averageOdd);



  for (const [team,value] of Object.entries(game.odds)){
    const str = team === 'x' ? 'draw' : ` Victory ${game[team]}`;
    console.log(`Odd of ${str}  :${value}`);
  }


  let scorer = {};

  for (const player of game.scored) {
    scorer[player] ? scorer[player]++ : scorer[player] =1;
  }

  console.log(scorer);
