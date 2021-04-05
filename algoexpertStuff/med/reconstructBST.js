// This is an input class. Do not edit.
class BST {
    constructor(value, left = null, right = null) {
      this.value = value;
      this.left = left;
      this.right = right;
    }
  }
  
  function reconstructBst(preOrderTraversalValues) {
      if (preOrderTraversalValues.length === 0) return null;
      
      let current = preOrderTraversalValues[0]; 
      let rightIdx = preOrderTraversalValues.length;
      //let leftIdx = null;
      
      for (let i = 1; i < preOrderTraversalValues.length; i++){
              let num = preOrderTraversalValues[i];
              // if (!leftIdx && num < current){
              // 	leftIdx = i; 
              // }
              if (num >= current){
                  rightIdx = i;
                  break; 
              }
      }
      
      //first half
      const left = reconstructBst(preOrderTraversalValues.slice(1, rightIdx))
      // latter half
      const right = reconstructBst(preOrderTraversalValues.slice(rightIdx))
      
    return new BST(current, left, right);
  }