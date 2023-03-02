// v easy 

var checkZeroOnes = function(s) {
  let onesConLen = 0;
  let onesLongest = 0;

  let zeroContLens = 0;
  let zeroLongest = 0;

  for (let i = 0; i < s.length; i++){
    let curr = s[i]
    if (curr == "1"){
      onesConLen++
    } else {
      onesConLen = 0
    }

    if (curr == "0"){
      zeroContLens++
    } else {
      zeroContLens = 0
    }

    onesLongest = Math.max(onesConLen, onesLongest)
    zeroLongest = Math.max(zeroContLens, zeroLongest)
  }

  return onesLongest > zeroLongest
};