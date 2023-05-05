var maximumWealth = function(accounts) {
  let max = 0
  for (let i = 0; i < accounts.length; i++){
      let subArry = accounts[i]
      let current = 0
      for (let j = 0 ; j < subArry.length; j++){
          current += subArry[j];
      }
      max = Math.max(max, current)
  }
  return max; 
};