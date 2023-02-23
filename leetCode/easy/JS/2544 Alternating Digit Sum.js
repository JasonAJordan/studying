// Honestly I forgot to convert the int to a string the first time. 

var alternateDigitSum = function(n) {
  const str = n.toString();
  let sum = 0;
  for (let i = 0; i < str.length; i++){
    if (i % 2 == 0){
      sum += parseInt(str[i]);
    } else {
      sum -= parseInt(str[i])
    }
  }
  return sum; 
};