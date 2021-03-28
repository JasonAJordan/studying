/**************************************************************************************
Write a function `reverseString(str)` that takes in a string and returns the given string
with its characters in reverse order.

Examples:

reverseString('taco');        // => 'ocat'
reverseString('hello world'); // => 'dlrow olleh'

Difficulty: Easy
*************************************************************************************/

function reverseString(str) {
    let reverseOrder = []

    for (let i = str.length - 1; i >= 0; i--){
        let char = str[i];
        reverseOrder.push(char)
    }
    return reverseOrder.join("");
}

console.log(reverseString('taco'))


