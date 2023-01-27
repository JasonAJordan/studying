var reverse = function(x) {
  const isNegative = x < 0;
  x = Math.abs(x);
  let ret = 0;
  while (x > 0) {
    const num = x % 10;
    console.log(num)
    x = Math.floor(x / 10);
    ret *= 10;
    ret += num;
    console.log(ret)
  }
  //  If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0
  if (ret > Math.pow(2,31)) return 0;
  return isNegative ? ret * -1 : ret;
};

console.log(reverse(-123))