// I didn't understand the question fully

// Input: gifts = [25,64,9,4,100], k = 4
// Output: 29
// Explanation: 
// The gifts are taken in the following way:
// - In the first second, the last pile is chosen and 10 gifts are left behind.
// - Then the second pile is chosen and 8 gifts are left behind.
// - After that the first pile is chosen and 5 gifts are left behind.
// - Finally, the last pile is chosen again and 3 gifts are left behind.
// The final remaining gifts are [5,8,9,4,3], so the total number of gifts remaining is 29.

var pickGifts = function(gifts, k) {
  for(let i = 0; i < k; i++){
      gifts.sort((a,b) => a - b)
      let newEl = Math.floor(Math.sqrt(gifts.pop()))
      gifts.push(newEl)
  }
  return gifts.reduce((a,b) => a + b)
};