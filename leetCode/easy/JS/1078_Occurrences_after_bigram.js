// v easy 

var findOcurrences = function(text, first, second) {
  let array = text.split(" ");
  let returnArray = [];
  for (let i = 0; i < array.length - 2; i++){
    let firstCheck = (array[i] == first);
    let secondCheck = (array[i+1] == second);
    if (firstCheck && secondCheck){
      returnArray.push(array[i+2]);
    }
  }
  return returnArray;
};