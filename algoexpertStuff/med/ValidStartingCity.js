function validStartingCity(distances, fuel, mpg) {
    // Write your code here.
      let milesleft = 0
      const numberOfCities = distances.length;
      
      let bestStartingIdx = 0; 
      let milesatBestStarting = 0;
      
      for (let i = 1; i < numberOfCities; i++){
          milesleft += fuel[i -1] * mpg - distances[i -1]; 
          
          if (milesleft < milesatBestStarting){
              milesatBestStarting = milesleft; 
              bestStartingIdx = i;
          }
      }
      
    return bestStartingIdx;
  }
  