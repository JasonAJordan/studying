// This is an input class. Do not edit.
class AncestralTree {
    constructor(name) {
      this.name = name;
      this.ancestor = null;
    }
  }
  
  function getYoungestCommonAncestor(topAncestor, descendantOne, descendantTwo) {
    // Write your code here.
      const depthOne = getDepth(topAncestor, descendantOne)
      const depthTwo = getDepth(topAncestor, descendantTwo)
      if (depthOne > depthTwo) {
          return backtrackAncestralTree(descendantOne, descendantTwo, depthOne - depthTwo);
      } else {
          return backtrackAncestralTree(descendantTwo, descendantOne, depthTwo - depthOne);
      } 
  }
  
  function getDepth(topAncestor, descendant){
      //let currentNode = descendant;
      let depth = 0; 
      while (topAncestor !== descendant){
          depth++;
          descendant = descendant.ancestor
      }
      return depth; 
  }
  
  function backtrackAncestralTree(lowerDescendant, higherDescendant, diff){
      while(diff > 0){
          lowerDescendant = lowerDescendant.ancestor;
          diff--;
      }
      while (lowerDescendant !== higherDescendant){
          lowerDescendant = lowerDescendant.ancestor;
          higherDescendant = higherDescendant.ancestor;
      }
      return lowerDescendant;
  }
  