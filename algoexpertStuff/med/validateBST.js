// This is an input class. Do not edit.
class BST {
    constructor(value) {
      this.value = value;
      this.left = null;
      this.right = null;
    }
  }
  
  function validateBst(tree) {
    // Write your code here.
    // return validateTreeHelper(tree, -Number.Min_SAFE_INTEGER, Number.MAX_SAFE_INTEGER)
      return validateTreeHelper(tree, -Infinity, Infinity)
  }
  
  function validateTreeHelper(tree, minValue, maxValue){
      
      if (tree === null) return true;
      if (tree.value < minValue || tree.value >= maxValue) return false; 
      
      const condtionLeft = validateTreeHelper(tree.left, minValue, tree.value)
      const condtionRight = validateTreeHelper(tree.right, tree.value, maxValue)
      
      return  (condtionLeft && condtionRight)
      
  }