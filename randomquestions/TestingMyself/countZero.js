// Count the amount of Zeros in an int ex 31 -> 3 [10, 20, 30]

function countZero(n) { 
  let count = 0
  for (let i = 9; i <= n; i++){
    if (i % 10 == 0){
      count++
    }
  }
  return count
}

console.log(countZero(30))