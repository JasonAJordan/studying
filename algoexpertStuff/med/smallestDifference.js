function smallestDifference(arrayOne, arrayTwo) {
  // Write your code here.
	arrayOne.sort((a,b) => a - b);
	arrayTwo.sort((a,b) => a - b);
	
	let indexOne = 0;
	let indexTwo = 0;
	
	let smallest = [];
	let smallestDifference = 999999999; // or use Infinity
	
	while((indexOne < arrayOne.length) && (indexTwo < arrayTwo.length)){
		let firstNum = arrayOne[indexOne];
		let secondNum = arrayTwo[indexTwo];
		let currentDif = Math.abs(firstNum - secondNum)
		if (currentDif === 0) return [firstNum, secondNum];
		
		if (currentDif < smallestDifference){
			smallestDifference = currentDif; 
			smallest = [firstNum, secondNum];
		}
		if (firstNum > secondNum){
			indexTwo++;
		}
		if (secondNum > firstNum){
			indexOne++;
		}
	}
	return smallest;
}

// better refactor with helper and overall logic.
function moveElementToEnd2(array, toMove) {
    // Write your code here.
      
      let i = 0;
      let j = array.length - 1;
      
      while (i < j){
          if (array[j] === toMove){
              j--;
          } else if (array[i] === toMove){
              swapHelper(i, j, array)
              i++;
          } else {
              i++;
          }
          
      }
      return array;
  }
  
  function swapHelper(i, j, array){
      let temp = array[i];
      array[i] = array[j];
      array[j] = temp;
      
  }