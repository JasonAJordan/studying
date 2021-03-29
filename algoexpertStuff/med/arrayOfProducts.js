function arrayOfProducts(array) {
    // Write your code here.
      let products = new Array(array.length).fill(1);
      
      let rightRunningProd = 1; 
      let leftRunningProd = 1;
      
      for (let i=0; i < array.length; i++){
          products[i] = leftRunningProd;
          leftRunningProd *= array[i];
      }
      
      for (let i = array.length - 1; i >=0; i--){
          products[i] *= rightRunningProd;
          rightRunningProd *= array[i]
      }
      
      return products
  }