// My solution was the same of as other solutions :)

var removeElement = function(nums, val) {
    let k = 0;
    for (let i = 0; i < nums.length; i++){
        if (nums[i] !== val ){
            nums[k] = nums[i]
            k += 1
        }
        // console.log(nums)
    }
    return k;
};