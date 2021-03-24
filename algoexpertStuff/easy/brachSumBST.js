// This is the class of the input root.
// Do not edit it.

// O(n) time | O(n) space 
// My first attempted I didn't use ) for my running sum and kept getting it wrong, 
// looked at the solution.

class BinaryTree {
    constructor(value) {
      this.value = value;
      this.left = null;
      this.right = null;
    }
  }
  
  function branchSums(root) {
    // Write your code here.
      const arraySums = [];
      
      branchSumHelper(root, 0, arraySums)
      return arraySums;
  }
  
  function branchSumHelper(node, runningSum, sums){
      if (!node) return;
      
      const newRunningSum = runningSum + node.value;
      if (!node.left && !node.right){
          sums.push(newRunningSum);
          return;
      }

      branchSumHelper(node.left, newRunningSum, sums);
      branchSumHelper(node.right, newRunningSum, sums);
  }