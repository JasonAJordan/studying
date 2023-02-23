var transpose = function(matrix) {
  // brute force [[1,3,4]] - > [[1],[3], [4]]
  let newMatrix = [];
  for (let i = 0; i < matrix[0].length; i++){
    let newCol = [];
    for (let j = 0; j < matrix.length; j++){
      newCol.push(matrix[j][i])
    }
    newMatrix.push(newCol)
  }
  return newMatrix
};