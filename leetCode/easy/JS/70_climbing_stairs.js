// thinking outloud
// 1 1 1 1 
// 2 1 1 
// 2 2 
// 1 2 1 
// 112
 // [1,2,3,]

 var climbStairs = function(n) {
    if (n == 1){
        return 1 
    }
    if (n == 2 ){
        return 2
    }
    let start = [1,2]
    for (let i = 1; i < n-1; i++){
        start.push(start[i] + start[i-1])
        // console.log(start)
    }
    return start[n-1]
};

// better thing I made while re-do
var climbStairs2 = function(n) {
    let start = [1,2]; 
    for (let i = 2; i < n; i++){
      start.push(start[i-2] + start[i-1])
    }
    return start[n-1]
  };