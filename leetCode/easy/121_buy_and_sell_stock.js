var maxProfit = function(prices) {
    let min_price = prices[0]
    let profit = 0
    for (let price of prices){
        if (price < min_price) {
            min_price = price
        } else if (price - min_price > profit){
            profit = price - min_price
        }
        console.log(prices, profit, min_price)
    }
    return profit
};

console.log( maxProfit([7,1,5,3,6,4]))