// Give the length of the array that has it's dups left behind,
// imo we should be returning a clean array but this is what the question was asking for 


// My 2021 submitions as I missread the question and was lost. 
var removeDuplicates = function(nums) {

    let i = 0;
    for (let j = 0; j < nums.length; j++) {
        if (nums[j] != nums[i]) 
            nums[++i] = nums[j];
    }
    return ++i;
};


// solution that explains the answer way better that I could have
var removeDuplicates2 = function(nums) {
    let insertIndex = 1;
    for(let i = 1; i < nums.length; i++){
        // We skip to next index if we see a duplicate element
        if(nums[i - 1] != nums[i]){  
            /* Storing the unique element at insertIndex index and incrementing
               the insertIndex by 1 */
            nums[insertIndex] = nums[i];  
            insertIndex++; 
        }
        console.log(insertIndex, nums)
    }
    return insertIndex;
};

console.log(removeDuplicates2([1,1,2,4,4,5]))