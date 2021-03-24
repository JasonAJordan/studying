//Best O(n), average O(n^2) worst O(n^2)

function insertionSort(array) {
    // Write your code here.
      
      for (let i = 0; i< array.length; i++){
              let j = i;
          
              while( j > 0 && array[j] < array[j - 1]){
                  swapHelper(array, j)
                  j -=1; //forgot this part during my frist try
              }
          
      }
      return array;
  }
  
  function swapHelper(array, j){
      let temp = array[j]
      array[j] = array[j - 1];
      array[j-1] = temp;
  }