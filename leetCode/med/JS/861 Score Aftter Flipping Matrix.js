// Another med that I really don't get, I also don't fully understand 2**(x-1)*y / 2**(x-1)*y

var matrixScore = function(grid) {
  // method...
  //   first flip all rows that start with a 0
  //   then flip all columns where 0s outnumber 1s
  
  let x = grid[0].length;
  let y = grid.length;

  // first column will always be all ones
  let sum = 2**(x-1)*y;
  
  for(let c = 1; c < x; c++) {
      let ones = 0;
      for(let r = 0; r < y; r++) {
          let row_would_flip = (grid[r][0] === 0);
    // count number of 1s in each column
          ones += (row_would_flip) ? grid[r][c]^1 : grid[r][c];
      }
      let zeroes = y - ones;
      let col_would_flip = (zeroes > ones);
      sum += 2**(x-1-c)*((col_would_flip) ? zeroes : ones);
  }
  return sum;
};