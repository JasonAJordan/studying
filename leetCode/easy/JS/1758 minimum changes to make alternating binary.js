var minOperations = function(s) {
  let zeroStartSwaps = 0;
  let oneStartSwaps = 0;
  let charsZeroStart = ["1","0"]
  let charsOneStart = ["0","1"]
  for (let i = 0; i < s.length; i++){
    let char = s[i]
    if (charsZeroStart[i %2] == char){
      zeroStartSwaps++;
    }
    if (charsOneStart[i % 2] == char){
      oneStartSwaps++;
    }

  }
  return Math.min( zeroStartSwaps, oneStartSwaps )
};