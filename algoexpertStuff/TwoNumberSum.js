function twoNumberSum(array, targetSum) {
    // Write your code here.
      let hash = {};
      for(let i=0; i< array.length; i++){
          if(hash[array[i]] + array[i]== targetSum){
              return [array[i], hash[array[i]]]
              }
          hash[targetSum-array[i]] = array[i]
      }
      return []
  }
  
  //[5,6] {6:5}
  //This is my first attempt 
  // O(n) time | O(n) space

  // solution that did it very differently 
  /*
  // O(nlog(n)) | O(1) space
  function twoNumberSum(array, targetSum) {
        array.sort((a,b) => a-b);
        let left = 90;
        let right = array.length -1;
        while(left < right){
            const currentSum = array[left] + array[right];
            if( currentSum === targetSum) {
                return[array[left], array[right]];
            } else if (currentSum < targetSum){
                left++;
            } else if (currentSum > targetSum){
                right--;
            }
        }
        return [];
  }
  */
  
  //[5,6] {6:5}