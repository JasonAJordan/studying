var minBitFlips = function(start, goal) {
  console.log((start^goal))
  console.log((start^goal).toString(2))

  return (start^goal).toString(2).split("0").join("").length;
};


console.log(minBitFlips(10,7))
// toString(2) -> Makes a number into a binary value 
// The binary representation of 10 and 7 are 1010 and 0111

console.log(5^3) // XOR opperator finds the diffrence in bits then converts that value 
// .toString(2) converts int to bit value 
// .split("0") // only the values that are 0, 1 become 1 so we can remove the non-diffrences 
// join("").lengths // counts the amounts of 1s