var maxArea = function(height) {
  let max = 0
  let i = 0 
  j = height.length - 1

  while (i < j) {
      max = Math.max(max, Math.min(height[i], height[j]) * (j - i))
      height[i] <= height[j] ? i++ : j--
  }
  return max
};


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49