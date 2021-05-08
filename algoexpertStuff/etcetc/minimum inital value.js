class Solution {
    solve(nums) {

     let output = 0;  // 0,  4
     let sum = 0;    //2, 

     for (let i = 0; i < nums.length; i++){
         let num = nums[i]
         sum += num

         if (sum < 1){
            let x = 1 - sum
            output += x
            sum += x
         } 
     }   
        if (output > 0) {
            return add
        } else {
            return 1
    }
}
}