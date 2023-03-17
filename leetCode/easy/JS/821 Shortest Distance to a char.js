var shortestToChar = function(s, c) {
  let n = s.length;
  let res = [];
      
  let prev = Infinity;

  // Loops Foward to store all prev locations going from start to end
  for (let i = 0; i < s.length; i++) {
      if (s[i] === c) {
        prev = i;
      }
      res[i] = Math.abs(prev - i);
  }
  console.log(res)

  prev = Infinity;

  // loops backwardds to find the min between foward and reverse min
  for (let i = n - 1; i >= 0; i--) {
    if (s[i] === c) {
      prev = i;
    }
    res[i] = Math.min(res[i], prev - i);
  }

  return res;
}

let s = "loveleetcode", c = "e"
console.log(shortestToChar(s,c))