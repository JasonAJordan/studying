var arrayPairSum = function(nums) {
  let nums2 = nums.sort((a,b) => a-b)
  return (nums2[nums.length - 1] + nums2[nums.length - 2] )
};