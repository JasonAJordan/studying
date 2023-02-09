// My solutions 

var largestGoodInteger = function(num) {
  if (num.length < 3) return ""

  let max = -1
  let valid = false 
  for (let i = 0; i < num.length - 2; i++){
    if (!isNaN(parseInt(num[i]))){
      if (num[i] === num[i + 1] && num[i] === num[i + 2]){
        valid = true;
        max = Math.max(max, parseInt(num[i]))
      } 
    }
  }
  if (valid) return "" + max + max + max
  return "" 
};

// A nicer looking one after I solved it
var largestGoodInteger = function (num) {
  let max = "";
  for (let i = 2; i < num.length; i++) {
      if (num[i] === num[i - 1] && num[i] === num[i - 2]) {
          const subString = num[i].repeat(3);
          if (subString > max) {
              max = subString;
          }
      }
  }
  return max;
};