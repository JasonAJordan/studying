function findClosestValueInBst(tree, target) {
    // Write your code here.
      return helper(tree, target, tree.value);
  }
  
  function helper(tree, target, closestValue){
      if (tree === null) return closestValue; //if empty return parent. 
      
      if(Math.abs(target - closestValue) > Math.abs(target - tree.value)){
          //compares target against last closest parent node vs current node. 
          //Note that this closest can be passed the way from the starting branch to leaf. 
          closestValue = tree.value;  
      }
      if (target < tree.value) { //simple compare. 
              return helper(tree.left, target, closestValue);
      } else if (target > tree.value){
          return helper(tree.right, target, closestValue);
      } else { //if it's the same we end the function. 
          return closestValue;
      }
  }
  
  // This is the class of the input tree. Do not edit.
  class BST {
    constructor(value) {
      this.value = value;
      this.left = null;
      this.right = null;
    }
  }
  
