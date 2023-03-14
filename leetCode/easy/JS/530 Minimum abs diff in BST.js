function TreeNode(val, left, right) {
       this.val = (val===undefined ? 0 : val)
       this.left = (left===undefined ? null : left)
       this.right = (right===undefined ? null : right)
   }


var getMinimumDifference = function(root) {
  //     Converting tree to an sorted array
  const arr = toArray(root);
  let out = Infinity;
  let i = 1;
  //     Now, simply finding the difference
      while(i<arr.length){
          let diff = Math.abs(arr[i-1]- arr[i]);
          if(diff<out) out = diff;
          i++;
      }
      return out;
  };

  function toArray(root, out=[]){
      if(root){
          toArray(root.left, out);
          console.log(out)
          out.push(root.val);
          console.log(out)
          toArray(root.right, out);
          console.log(out)
          return out;
      }
};

let node = new TreeNode(1, new TreeNode(0, null, null), new TreeNode(10, null, null))

console.log(getMinimumDifference(node));