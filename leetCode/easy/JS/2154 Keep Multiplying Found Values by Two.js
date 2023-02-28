var findFinalValue = function(nums, original) {
  // brute force 
  let result = original;
  for (let i = 0; i< nums.length; i++){
    if (nums[i] == result){
      i = -1;
      result *= 2
    }
  }
  return result; 
};

var findFinalValue2 = function(nums, original) {
  let set = new Set(nums);
  while (set.has(original)) {
    original *= 2;
  }
  return original
};