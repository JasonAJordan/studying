var maxPower = function(s) {
  let power = 1
  
  let start = 0
  for (let end = 1; end < s.length; end++) {
      if (s[start] !== s[end]) {
          start = end
      }
          
      power = Math.max(power, end - start + 1)
  }
  
  return power
};

// burte force but has better run time?
var maxPower = function(s) {
  let max = 1;
  let count = 1;
  for (let i = 1; i < s.length; i++){
    const currentChar = s[i];
    const previousChar = s[i - 1];
    if (currentChar == previousChar){
      count++;
    } else {
      count = 1;
    }
    max = Math.max(max, count)
  }
  return max;
};