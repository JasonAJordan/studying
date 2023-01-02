

// First attempt 
var isPalindrome = function(x) {
    let xString = x.toString()
    let lens = xString.length
    for (let i = 0; i < lens ; i++){
        if (xString[i] !== xString[lens-i-1]){
            return false
        }
    }
    return true
};

// 2020 attempt

var isPalindrome2 = function(x) {
    if(x<0) return false;
    if(x<10) return true;
    let reversed=0, num=x;
    while(num>0){
        reversed=reversed*10 + num%10;
        num=Math.floor(num/10);
    }
    return reversed===x;
}

function isPalindrome3(x) {

    let str = x.toString();

    let rev = str.split('').reverse().join('');

    return str === rev;

}

//console.log(isPalindrome(121), isPalindrome(-121), isPalindrome(123))
console.log(isPalindrome2(121), isPalindrome2(-121), isPalindrome2(123))
