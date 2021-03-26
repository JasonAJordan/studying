//O(n) time | O(1)

function isMonotonic(array) {
    // Write your code here.
      let increasing = true;
      let decreasing = true; 
  
      for (let i =0; i < array.length - 1; i++){
                  if (array[i] < array[i + 1]){
                      decreasing = false;
                  } else if ( array[i] > array[i+1]){
                      increasing = false;
                  }
      }
          
      return increasing || decreasing
  }