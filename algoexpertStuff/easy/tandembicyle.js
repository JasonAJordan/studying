function tandemBicycle(redShirtSpeeds, blueShirtSpeeds, fastest) {
    // Write your code here.
      redShirtSpeeds.sort((a,b) => a - b);
      
      if (fastest === true) {
          blueShirtSpeeds.sort((a,b) => a - b);
      } else {
          blueShirtSpeeds.sort((a,b) => b - a);
      }
      //console.log(blueShirtSpeeds)
      let speed = 0; 
      for (let i = 0; i < redShirtSpeeds.length; i++){
          const rider1 = redShirtSpeeds[i];
          const rider2 = blueShirtSpeeds[blueShirtSpeeds.length - i - 1];
          speed += Math.max(rider1, rider2)
          
      }
      
    return speed;
  }