function selectionSort(array) {
    // Write your code here.
      
      let index = 0; 
      while (index < array.length - 1){
                  let subIndex = index
                  for (let i = index + 1; i < array.length; i++){
                          if (array[subIndex] > array[i]) {
                              subIndex = i;
                          }
                  }
                  swapHelper(array, index, subIndex)
                  index++;
      }
      return array
  }
  
    function swapHelper(array, i, j){
        let temp = array[j]
        array[j] = array[i];
        array[i] = temp;
    }

//I don't like this one.