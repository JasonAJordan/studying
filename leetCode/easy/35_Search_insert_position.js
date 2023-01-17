// My solution, I had to look at other peoples to noticed I had to change line 7 from min < max to min <= max to get it to work. 

var searchInsert = function(nums, target) {
    let min = 0
    let max = nums.length - 1;
    console.log("min: ", min, "max: ", max)
    while (min <= max){
        let mid = Math.floor(( max + min) / 2)
        if (target > nums[mid]){
            min = mid + 1
        } else if(target < nums[mid]) {
            max = mid - 1
        } else {
            return mid
        }
    console.log(min, max, mid, nums[mid])
    }
    return min 
};


// A slighltly dif solution I found 
var searchInsert2 = function(nums, target) {
    let left = 0;
    let right = nums.length - 1;
    let result = 0;

    while (left <= right) {
        let mid = Math.floor((left + right) / 2);
        if (target === nums[mid]) {
            return mid;
        }
        else if (target < nums[mid]) {
            right = mid - 1;
        }
        else {
            result = mid + 1;
            left = mid + 1;
        }
    }

    return result;
}

console.log( searchInsert([1,3,3,7], 2))