// I forgot sort can just work with strings

var removeDigit = function(number, digit) {
  let str = [];

  for (let i = 0; i < number.length; i++) {
    if (number[i] == digit ) {
        let s = number.substring(0, i) + number.substring(i+1);
        str.push(s);
      }
  }
  
  str.sort();
  return str[str.length-1];
};