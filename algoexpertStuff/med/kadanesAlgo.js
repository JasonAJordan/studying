function kadanesAlgorithm(array) {
    // Write your code here.
      let currentMax = array[0];
      let totalmax = array[0];
      
      for (let i = 1; i < array.length; i++){
              let num = array[i];
              currentMax = Math.max(num, currentMax + num)
              totalmax = Math.max(totalmax, currentMax)
      }
      return totalmax;
  }