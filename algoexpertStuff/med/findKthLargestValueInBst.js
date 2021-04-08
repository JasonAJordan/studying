// This is an input class. Do not edit.
class BST {
    constructor(value) {
      this.value = value;
      this.left = null;
      this.right = null;
    }
  }
  
  function findKthLargestValueInBst(tree, k) {
    // Write your code here.
      let array = [];
      findallValues(tree, array)
      
      array.sort((a,b) => a - b)
      
    return array[array.length - k];
  }
  
  function findallValues(tree,array){
      if (!tree) return; 
      
      findallValues(tree.left, array)
      array.push(tree.value)
      findallValues(tree.right, array)
      
      return array;
  }