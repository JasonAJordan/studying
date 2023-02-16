// a big part of this was too change the main function to have outuput = [], i didn't know that was allowed tbh

var preorder = function(root, output = []) {
  if (root == null){
    return output
  }
  output.push(root.val)
  for (let child of root.children){
    preorder(child, output)
  }
  return output; 
};