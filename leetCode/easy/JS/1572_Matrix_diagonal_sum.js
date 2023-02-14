// O 2n time

var diagonalSum = function(mat) {
  let sum = 0;
  for (let i = 0, j = 0; i < mat.length; i++, j++){
    sum += mat[i][j];
  }
  for (let i = 0, j = mat.length - 1; i < mat.length; i++, j--){
    if (i !== j){
    sum += mat[i][j];
    }

  }
  return sum; 
};

// slighty better solution
var diagonalSum = function(mat) {
  let n = mat.length;
  let mid = Math.floor( n / 2 );

  let summation = 0;
  for( let i = 0 ; i < n ; i++ ){
      // primary diagonal
      summation += mat[i][i];
      
      // secondary diagonal
      summation += mat[n-1-i][i];
  }
  if( n % 2 == 1 ){
      summation -= mat[mid][mid];
  }
  return summation;
};