

var largeGroupPositions = function(s) {
  let currentChar = s[0]
  let startIdx = 0
  let array = [];

  for (let i = 1; i < s.length; i++){
    if (s[i] !== currentChar){
      if (i - startIdx >= 3 ){
        array.push([startIdx, i - 1])
      }
      currentChar = s[i]
      startIdx = i
    }
  }
  // Edge case for abccc
  if (s.length - startIdx >= 3){
    array.push([startIdx,s.length - 1] )
  }
  return array; 
};