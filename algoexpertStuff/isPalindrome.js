function isPalindrome(string) {
    // Write your code here.
      let leftIdx = 0;
      let rightIdx = string.length -1; 
      
      while (leftIdx < rightIdx){
          if (string[leftIdx] !== string[rightIdx]) return false; 
          leftIdx++;
          rightIdx -= 1;
      }
      return true;
  }

  //first attempt all green! 
  // o(n) time, o(1) space;