'use strict';

Promise.resolve('Fuck javaScript').then(res=>{
  console.log(res);
}).catch(err=>console.log(err));


//^ parallel promise syntax
// Promise.all([getJson(),
// getJson(),getJson()]);

(function(){
  console.log("Plz provide name of this function Chat!");
})();

// Promise.any([
//   Promise.all([
//     Promise.reject('Hello promise'),
//     Promise.reject('Hello promise 2')
//   ]),
//   Promise.reject('Luck'),
//   Promise.reject('Duck'),
// ]).then(res=>console.log(res))
// .catch(err=>console.warn(err.message));