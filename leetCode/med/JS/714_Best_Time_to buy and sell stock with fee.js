

var maxProfit = function(prices, fee) {
  let len = prices.length
  let buying = 0
  let selling = -prices[0]
  for (let i = 1; i < len; i++) {
    buying = Math.max(buying, selling + prices[i] - fee)
    selling = Math.max(selling, buying - prices[i])
    console.log(buying, selling)
  }
  return buying
};

console.log(maxProfit([1,3,2,8,4,9], 2))