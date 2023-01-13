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
    if (num == 1 ) return true 
    if (num < 1) return false 
    let pointer = 1

    while (pointer <= num){
        if (pointer == num){
            return true
        }
        pointer = pointer * 2
    }
    return false 
}

console.log(isPowerOfTwo(32))

