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