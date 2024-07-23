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
scored: ['Thomas Muller', 'Joshua Kimmich', 'Alphonso Davies'],
odds: {
    team1: 1.33,
    x: 3.25,
    team2: 6.5
}
}

// const [player1, player2] = game.players;
// console.log(player1, player2);

// const [gk, ...fieldplayer] = player1;

// console.log(gk,fieldplayer);

// const allPlayers = [...player1, ...player2];
// console.log(allPlayers);

// const player1Final = [...player1,'Aryan','Bibek',"Yogesh"];
// console.log(player1Final);

// const printGoals = function(...player){
//     console.log(`${player.length} goals scored.`);
//     for(let i=0; i<player.length; i++){
//         console.log(`player scored Goal: ${player[i]}`);
//     }
// }

// printGoals(...game.scored);


// const {odds: {team1, x:draw, team2}} = game;
// console.log(team1,draw,team2);


// team1<team2 && console.log('Team one is likely to win');
// team1>team2 && console.log('Team two is likely to win');