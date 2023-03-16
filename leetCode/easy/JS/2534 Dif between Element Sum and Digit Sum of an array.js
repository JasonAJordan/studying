var differenceOfSum = function(nums) {
  let sum = nums.reduce((a , b) => a + b)
  let dsum = 0;
  for (let num of nums){
    let dnumArray = num.toString().split("")
    for (let dnum of dnumArray){
      dsum += parseInt(dnum)
    }
  }
  return sum - dsum; 
};

// much better solu than I thought of 
var differenceOfSum = function(nums) {
  
  const elsum = nums.reduce((a, b) => a + b, 0);
  var  digits = nums.join('').split(''); // Also til that you can use .join("") to conver an array of ints to string 
  var digsum = 0;
  for (var i = 0; i<digits.length; ++i ){
      digsum = digsum + Number(digits[i]);
  }

  return Math.abs(elsum-digsum);
};