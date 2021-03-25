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