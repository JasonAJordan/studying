// This one was easy too, had to google unshift array command been a while. 

var plusOne = function(digits) {
    let running = true 
    idx = (digits.length - 1)

    while (running) {
        // console.log(digits[idx])
        if (digits[idx] == undefined){
            digits.unshift(1)
            running = false  
        }
        else if (digits[idx] != 9){
            digits[idx] = digits[idx] + 1
            running = false 
        } else {
            digits[idx] = 0
            idx = idx - 1
        } 

    }
    return digits
};

// Somehow I had a brain fart while doing this one another time. new solution
var plusOne = function(digits) {
    let running = true 
    let idx = digits.length - 1
    let hold = 0;
    while (running && idx >= 0) {
      if (digits[idx] == 9){
        digits[idx] = 0
        hold = 1;
      } else {
        digits[idx] += 1
        hold = 0
        running = false
      }
      idx--; 
    }
    if (hold == 1) {
      digits.unshift(1)
    } 
  
    return digits
  };