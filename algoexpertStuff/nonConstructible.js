function nonConstructibleChange(coins) {
    // Write your code here.
      coins.sort((a, b) => a - b);
      
      let currentChange = 0;
      for (let i =0; i < coins.length; i++){
          let coin = coins[i];
          
          if (coin > currentChange + 1) return currentChange + 1; 
          
          currentChange += coin;
      }
      
    return currentChange + 1;
  }

//Needed the solution, O(nlogn) time | O(1) space