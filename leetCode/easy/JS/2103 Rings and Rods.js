// 
// Input: rings = "B0B6G0R6R0R6G9"
// Output: 1
// Explanation: 
// - The rod labeled 0 holds 3 rings with all colors: red, green, and blue.
// - The rod labeled 6 holds 3 rings, but it only has red and blue.
// - The rod labeled 9 holds only a green ring.
// Thus, the number of rods with all three colors is 1.


var countPoints = function(rings) {
  let rods = '0123456789'; // setting up a custom loop 
  let count = 0;
  for (let rod of rods) { // looping over the variable, rods
    if (rings.includes(`R${rod}`) && 
    rings.includes(`G${rod}`) && 
    rings.includes(`B${rod}`)) count++; // checking if rings includes
  // R, G, & B on that rod
  // if so, add to count
  } return count;
};