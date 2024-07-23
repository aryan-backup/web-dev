// const random = {
//   firstName: "Aryan",
//   secondName: "Saud",

//   hello(){
//     console.log("Welcome "+this.firstName+" "+this.secondName);
//   }
// }

// random.hello();


var Str = 'Adarsh';
var patt = 'arsh';
let regExp = new RegExp(patt, 'i');;

if (Str.search(regExp) !== -1) {
    console.log("True");
} else {
    console.log("False");
}