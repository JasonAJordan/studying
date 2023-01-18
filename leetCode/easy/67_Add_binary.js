// This is what I first thought off might not be the "best" way however

var addBinary = function(a, b) {
    carry = 0
    result = []

    aL = a.split("")
    bL = b.split("")
    
    while (aL.length || bL.length || carry){
        if (aL.length){
            carry += parseInt(aL.pop())
        }
        if (bL.length){
            carry += parseInt(bL.pop())
        }

        // Dealing with the carry
        // first case of a [1,1] [1,1] => [1 1 0]
        if (carry == 3 ){
            result += "1"
            carry = 1
        } else if (carry == 2){
            result += "0"
            carry = 1
        } else {
            result += carry.toString()
            carry = 0
        }
        //console.log(result, carry)
    }
    return result.split("").reverse().join("")
};

// an awful way I ended up doing

var addBinary = function(a, b) {
    let hold = 0;
    let arryA = a.split("")
    let arryB = b.split("")
    let results = []

    while (arryA.length > 0 || arryB.length > 0){
        if (arryA.length > 0 && arryB.length > 0){

          let aVal = parseInt(arryA.pop())
          let bVal = parseInt(arryB.pop())
          let result = aVal + bVal + hold
          hold = 0
          if (result == 3){
            results.unshift(1);
            hold = 1
          } else if (result == 2){
            results.unshift(0);
            hold = 1;
          } else if (result == 1){
            results.unshift(1);
          } else {
            results.unshift(0);
          }
        } else if (arryA.length > 0) {
          let result = parseInt(arryA.pop()) + hold
          hold = 0
          if (result == 2){
            results.unshift(0);
            hold = 1;
          } else if (result == 1){
            results.unshift(1);
          } else {
            results.unshift(0);
          } 
        } else {
          let result = parseInt(arryB.pop()) + hold
          hold = 0
          if (result == 2){
            results.unshift(0);
            hold = 1;
          } else if (result == 1){
            results.unshift(1);
          } else {
            results.unshift(0);
          }
        }

    } 
  if (hold == 1) results.unshift(1)
  return results.join("")
};