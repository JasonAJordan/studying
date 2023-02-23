// first try but v easy

var subtractProductAndSum = function(n) {
  str = n.toString()
  product = 1
  sum = 0
  for (let i = 0; i < str.length; i++){
      product *= parseInt(str[i])
      sum += parseInt(str[i])
  }
  return product - sum
};