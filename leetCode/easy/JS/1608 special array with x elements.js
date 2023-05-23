//Input: nums = [3,5]
// Output: 2
// Explanation: There are 2 values (3 and 5) that are greater than or equal to 2.

var specialArray = function(nums) {
  nums.sort((a, b) => b - a);
  nums.push(-1);
  for (let i = 0, prev = 0; i <= nums.length; ++i) {
    console.log(nums,i, prev);
    if (nums[i] === nums[prev]) continue;
    if (i <= nums[prev] && i > nums[i]) return i;
    prev = i;
  }
  return -1;
};

console.log(specialArray([0,5,6]))