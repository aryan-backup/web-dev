const amountInputEl = document.querySelector('#amount');
const tipInputEl = document.querySelector('#rate');
const personInputEl = document.querySelector('#person');
const calcBtn = document.querySelector('.btn');
const billAmount = document.querySelector('.total-amount');
const tipAmount = document.querySelector('.tip');
const totalPayableAmount = document.querySelector('.Payable');
const perPerson = document.querySelector('.person_amount');

const displayAmounts = function() {
  let amount = Number(amountInputEl.value);
  let tipRate = Number(tipInputEl.value);
  let totalPerson = Number(personInputEl.value);


  if (amount <= 0 || tipRate < 0 || totalPerson <= 0) {
    alert('Enter all values correctly');
    return;
  }


  const tips = (tipRate / 100) * amount;
  const total = amount + tips;
  const perPersonAmount = total / totalPerson;

  billAmount.innerText = amount;
  tipAmount.innerText = `${tips} (${tipRate.toFixed(0)}%)`;
  totalPayableAmount.innerText = total;
  perPerson.innerText = perPersonAmount;
};

calcBtn.addEventListener('click', () => {
  displayAmounts();
  amountInputEl.value='';
  tipInputEl.value='';
  personInputEl.value='';
});

