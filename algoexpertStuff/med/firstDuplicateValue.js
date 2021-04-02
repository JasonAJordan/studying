function firstDuplicateValue(array) {
    // Write your code here.
      
          let helperObj = {}
      
          for (let i = 0; i < array.length; i++){
              let number = array[i];
              if (helperObj[number]) return number;
              
              helperObj[number] = number
          }
    return -1;
  }