/**************************************************************************************
Write a function `isPowerOfTwo(num)` that takes in a number and returns a boolean indicating
whether or not the number is a power of two.

The powers of two are 1, 2, 4, 8, 16, 32, 64, ... etc

Examples:

isPowerOfTwo(1);  // => true
isPowerOfTwo(32); // => true
isPowerOfTwo(12); // => false
isPowerOfTwo(33); // => false
isPowerOfTwo(-8); // => false

Difficulty: Medium
*************************************************************************************/

function isPowerOfTwo(num) {
    if (num < 1) return false;

    for (let i =1; i <=num; i = i* 2){
        if (num % i > 0){
            return false;
        }
    }
    return true;
}

console.log(isPowerOfTwo(34))
