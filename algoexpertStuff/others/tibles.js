// Given an array of N integers, return true if there exists 3 sequential numbers that sum to 0. 

// Examples
// [1,2,-3] == true
// [2,2,4,-4,0] == true
// [-2,-2,3,4,4] = false

// N = 0..<10000

function q1(n){
    for (let i = 0; i < n.length - 2; i++){
        let num1 = n[i];
        let num2 = n[i + 1];
        let num3 = n[i + 2];
    
        if (num1 + num2 + num3 === 0){
            return true;
        }
    }
    return false;
}
let a = [2,2,4,-4,0] 
console.log(q1(a))
