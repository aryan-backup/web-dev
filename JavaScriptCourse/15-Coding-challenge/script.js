const pollBtnEl = document.getElementById("pollBtn");

const poll = {
  question: "What is your favorite programming language ?",
  option: ["0: JavaScript", "1: Python", "2: Rust", "3: C++"],

  answer: [0, 0, 0, 0],

  giveAnswer() {
    let value = prompt(
      `${this.question}\n${this.option.join("\n")}\n(Write option number)`
    );

    if (value === "") {
      alert("Enter option!");
    }
    else if (typeof Number(value) === "number") {
      if (value >= 0 && value < this.answer.length) {
        this.answer[value]++;
        this.displayResult();
        this.displayResult("string");
      } else {
        alert("Enter correct option");
      }
    } 
  },

  displayResult(type = "array") {
    if (type === "array") {
      console.log(this.answer);
    } else if (type === "string") {
      console.log(`Poll results are ${this.answer.join(", ")}`);
    }
  },
};

pollBtnEl.addEventListener("click", () => {
  poll.giveAnswer();
});


//? Bonus
// const hello = {
//   answer: [1,5,3,9,6,1],
// };

// const helloBro =poll.displayResult.bind(hello);
// helloBro('string');
// helloBro();


// (()=> console.log('This is immediately invoked function'))();

// (function (){
//   console.log('This is also immediately invoked function')
// })();