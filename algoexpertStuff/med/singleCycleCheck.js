function hasSingleCycle(array) {
    // Write your code here.
      let numsOfJumps = 0;
      let idx = 0; 
      
      //let cycle = true; 
      
      while (numsOfJumps <= array.length){
          if (numsOfJumps === array.length  && idx === 0) return true;
          if (numsOfJumps > 0 && idx === 0) return false;
          numsOfJumps++;
          
          let nextIdx  = (idx + array[idx]) % array.length; 
          nextIdx >= 0 ? idx = nextIdx : idx = nextIdx + array.length 
  
          //console.log(array[idx])
      }
      return idx === 0; 
      
  }
  