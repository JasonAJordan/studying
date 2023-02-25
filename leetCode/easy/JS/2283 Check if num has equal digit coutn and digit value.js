// very intresting problem 

var digitCount = function(num) {
  const arr = Array(num.length).fill(0);
  for (const char of num) {
    console.log(arr)
    arr[Number(char)]++;
  }
  return arr.join('') === num;
};

console.log(digitCount("1210"));