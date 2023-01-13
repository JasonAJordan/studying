/**************************************************************************************
Write a function `reverseString(str)` that takes in a string and returns the given string
with its characters in reverse order.

Examples:

reverseString('taco');        // => 'ocat'
reverseString('hello world'); // => 'dlrow olleh'

Difficulty: Easy
*************************************************************************************/

// function reverseString(str) {
//     return str.split("").reverse().join("")

// }


function reverseString(str) {
    let revArr = []
    
    for (let i = (str.length -1); i >= 0 ; i--){
        revArr.push(str[i])
    }
    return revArr.join("")
}

console.log(reverseString("asdf"))


