const testimonials = document.querySelectorAll('.testimonial-container');
const btnLeft = document.querySelector('.btn-left');
const btnRight = document.querySelector('.btn-right');

let currentIndex =0;
let intervalId;

const slideRight = ()=>{
  testimonials[currentIndex].classList.remove('active');
  currentIndex++;
  if(currentIndex>testimonials.length-1) currentIndex =0;
  testimonials[currentIndex].classList.add('active');
  clearInterval(intervalId);
  intervalId=setInterval(slideRight,5000);
}

const slideLeft = ()=>{
  testimonials[currentIndex].classList.remove('active');
  currentIndex--;
  if(currentIndex<0) currentIndex =testimonials.length-1;
  testimonials[currentIndex].classList.add('active');
  clearInterval(intervalId);
  intervalId=setInterval(slideRight,5000);
}

btnRight.addEventListener('click', slideRight);

btnLeft.addEventListener('click', slideLeft);


intervalId=setInterval(slideRight,5000);