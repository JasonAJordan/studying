function threeNumberSum(array, targetSum) {
  // Write your code here.
	let sums = [];
	array.sort((a,b) => a - b);
	
	for (let i = 0; i < array.length - 2; i++){
		
		let lowerIdx = i + 1
		let upperIdx = array.length - 1
		
		while (lowerIdx < upperIdx){
			let sum = array[i] + array[lowerIdx] + array[upperIdx]
			if ( sum === targetSum){
				sums.push([array[i], array[lowerIdx], array[upperIdx]])
				lowerIdx++;
				upperIdx--;
			} else if (sum < targetSum){
				lowerIdx++;
			} else if (sum > targetSum){
				upperIdx--;
			}
		}
	}
	return sums;
}