function countZero(n) { 
    let count = 0
    while(n>0) { 
      count += Math.floor(n/10) 
      n = n/10 
    } 
    return count 
  }


console.log(countZero(221))