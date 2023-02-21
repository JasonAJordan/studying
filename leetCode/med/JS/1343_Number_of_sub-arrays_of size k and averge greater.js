// my timed out solution 


var numOfSubarraysa = function(arr, k, threshold) {
  let count = 0;
  for (let i = 0; i < arr.length; i++) { // left idx
    for (let j = i + k - 1; j < arr.length; j++) { // right idx
      let subset = [];
      let subsum = 0;
      // we have index i and j of the subarray, let's print it
      for (let k = i; k <= j; k++) {
        subset.push(arr[k]);
        subsum += arr[k];
      } 

      let lengthCheck = subset.length == k
      let avgCheck = subsum / subset.length >= threshold;
      if (lengthCheck && avgCheck){
        count++; 
      }
    }
  }
  return count;


};
// sliding window solu
const numOfSubarraysSW = (nums, k, threshold) => {
  let count = 0, windowSize = 0, windowSum = 0;
  for(let i = 0; i < nums.length + 1; i++){
      if(windowSize === k){
          if(windowSum / k >= threshold) count++;
          windowSum -= nums[i - k];
          windowSize--;
      }
      windowSum += nums[i];
      windowSize++;
  }
  return count;
};

// The solution I understand 0n
var numOfSubarrays = function(arr, k, threshold) {
 
  let i= 0 , sum = 0 , count=0;
  for(let j = 0; j < arr.length ; j++){
    sum += arr[j];
    // here we are checking if we have the window with correct length we want
    if( j - i + 1 == k ){
      if ( sum / k >= threshold){
        count++
      }
      sum -= arr[i]
      i++ // Having i++ keeps moving the left idx as the right one move
    }
  }
    return count    
  }