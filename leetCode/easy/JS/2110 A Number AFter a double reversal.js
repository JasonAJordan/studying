var isSameAfterReversals = function(num) {
  if (num === 0) return true
  let stringNum = num.toString();
  if ( stringNum[stringNum.length - 1] === "0") {
      return false
  } else 
  return true
};


// better solu
var isSameAfterReversals = function(num) {
  return num==0 || num%10;   
};