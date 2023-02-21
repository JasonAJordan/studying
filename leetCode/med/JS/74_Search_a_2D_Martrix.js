
// O(n*m)

function searchMatrixbad(matrix, target) {
  if (!matrix.length || !matrix[0].length) return false;

  let row = 0;
  let col = matrix[0].length - 1;

  while (col >= 0 && row <= matrix.length - 1) {
    if (matrix[row][col] === target) return true;
    else if (matrix[row][col] > target) col--;
    else if (matrix[row][col] < target) row++;
  }

  return false;
}



function searchMatrix(matrix, target) {
  const [rows, cols] = [matrix.length, matrix[0].length];
  let [left, right] = [0, rows*cols-1];
  
  while (left <= right) {
      const mid = (left + right) >> 1;
      const [row, col] = [Math.floor(mid/cols), mid % cols]
      const guess = matrix[row][col];
      
      const isTarget = guess === target;
      if (isTarget) return true;
      
      const isTargetGreater = guess < target;
      if (isTargetGreater) left = mid + 1;
      
      const isTargetLess = guess > target;
      if (isTargetLess) right = mid - 1;
      
  }
  return false
}