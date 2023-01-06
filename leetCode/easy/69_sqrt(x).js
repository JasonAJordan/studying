
// first thing that came to my mind
var mySqrt = function(x) {
    let start = 1;
    while (start * start <= x){
        start++;
    }
    return (start - 1);
};

// A better solution 
const mySqrt2 = function(x) {
    let start = 0;
    let end = x;
    let res = 0;
    while (start < end) {
        res = Math.ceil((start + end)/2); // 1.
        if (res*res <= x && (res + 1)*(res + 1) > x) return res; // 2.
        if (res*res < x) start = res; // 3.
        else end = res; // 4.
    }
    return res;
};