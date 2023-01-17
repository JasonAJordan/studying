// My solution was the same of as other solutions :)
// also imo we should be returning a new sliced array but this is what the question was asking for 

var removeElement = function(nums, val) {
    let k = 0;
    for (let i = 0; i < nums.length; i++){
        if (nums[i] !== val ){
            nums[k] = nums[i]
            k += 1
        }
        // console.log(nums)
    }
    console.log(k, nums)
    return k;
};

console.log(removeElement([1,1,2,4,4,5], 4))