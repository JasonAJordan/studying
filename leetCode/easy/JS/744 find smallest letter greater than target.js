var nextGreatestLetter = function(letters, target) {
  // because c > target finds the first value greater than the target it would return the value we want
  // of the starting value 
  return letters.find(c => c > target) || letters[0];
};

let letters = ["c","f","j"], target = "i"
console.log("a" < "b")
console.log(nextGreatestLetter(letters, target))