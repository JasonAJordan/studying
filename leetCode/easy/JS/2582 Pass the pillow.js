var passThePillow = function(n, time) {
  // total jumps to make a circle 
  let count = Math.floor(time / (n-1));
  // the remainder 
  let mod = time % (n-1);
  console.log(count, mod)
  if(count % 2 == 0) {
      return 1 + mod
  }
  return n - mod
};

console.log(passThePillow(3,6))