/**************************************************************************************
Write a function `areCoprime(num1, num2)` that takes in two numbers and returns a boolean
indicating whether or not the given numbers are coprime. Two numbers are said to be coprime
if the only common factor between them is the number 1.

For example,
  16 and 25 are coprime because 1 is the only number that divides both of them
  14 and 21 are not coprime because 7 divides both of them

Examples:

areCoprime(16, 25); // => true
areCoprime(15, 14); // => true
areCoprime(14, 21); // => false
areCoprime(15, 6);  // => false
areCoprime(15, 5);  // => false

Difficulty: Medium
*************************************************************************************/

function areCoprime(num1, num2) {
  let limit = (num1 > num2) ? num1 : num2; 

  for(let i = 2; i <= limit; i++){
    let condition1 = (num1 % i === 0)
    let condition2 = (num2 % i === 0)

    if (condition1 && condition2){
      return false;
    }
  }

  return true;

}

//console.log(areCoprime(6, 15))

