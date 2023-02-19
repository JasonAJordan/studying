// a bit easy ngl. 
var isPowerOfThree = function(n) {
  while (n > 1){
    n /= 3
    console.log(n)
  }
  return (n == 1)
};

console.log(isPowerOfThree(81))