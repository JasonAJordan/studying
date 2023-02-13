// I actually don't know what is "^=" opperator existed until I looked at a solution


var singleNumber = function(nums) {

    let num = 0;
    for (let n of nums) {
      num ^= n;
      console.log(num)
    }
    return num;
  
  };

// singleNumber([4,2,1,4,2])

console.log( 1 ^ 1 )
console.log( (1 ^ 2), (3 ^ 3))