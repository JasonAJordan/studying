 function TreeNode(val, left, right) {
    this.val = (val===undefined ? 0 : val)
    this.left = (left===undefined ? null : left)
    this.right = (right===undefined ? null : right)
    }

// Not sure how to reproduce it on my machine 

var preorderTraversal = function(root) {
    if (!root) {
      return []
    }
    
    let stack = [root]
    let arr = []
    console.log(stack)
    while (stack.length) {
      let curr = stack.pop()
      console.log(curr)
      arr.push(curr.val)
      
      if (curr.right) {
        stack.push(curr.right)
      }
      
      if (curr.left) {
        stack.push(curr.left)
      }
    }
    return arr
  
  };

let testNode = new TreeNode (2, null, new TreeNode(3, null, null))
let testRoot = new TreeNode (1,null, testNode)
console.log(preorderTraversal(testRoot))