// I found a better solutions that wasn't a one line answer. 

var thousandSeparator = function(n) {
  if (n<1000) {
    return n.toString();
  } 
  let arr = Array.from(String(n), Number);
  for (let i = 3; i < arr.length; i+=4) {
      arr.splice(arr.length-i, 0, '.');
  }
  return arr.join("");
};