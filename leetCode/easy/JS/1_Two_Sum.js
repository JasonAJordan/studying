var twoSum = function(nums, target) {
    let targets = {};
    for (let i = 0; i < nums.length; i++){
        if (targets[nums[i]]!== undefined){
            return [targets[nums[i]] ,i]
        } else {
            targets[target - nums[i]] = i
        }
    }
    return [];
};

// 2021 

const twoSum = function(nums, target) {
    const hash = {};
    for(let i=0; i<nums.length; i++){
        if(hash[nums[i] ]>=0){
            return [ hash[nums[i] ] , i]
        }
        hash[target-nums[i]] = i
    }

};


function myFunction(p1, p2) {
    return p1 * p2;
  }