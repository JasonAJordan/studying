function countZero(number){
    let cycles = number.toString().length - 1
    let zeros = 0;

    for (let i = 1; i <= cycles; i++){
        zeros += Math.floor(number / (10**i)) * (10**(i-1))
    }
    return zeros;
}

console.log(countZero(122))

// 1(0)0, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 120   :12
//10,20,30,40,50,60,70,80,90, 10(0)  :10

// (122/ 10) * 1 = 12 
//  Math.floor(122 / 100) * 10 = 10
