function findThreeLargestNumbers(array) {
  // Write your code here.
	let largest = null;
	let larger = null; 
	let large = null;
	
	for (let i =0; i < array.length; i++){
			let num = array[i];
		
			if (largest === null ||num > largest){
				large = larger;
				larger = largest;
				largest = num; 
			} else if ( larger === null || num > larger){
				large = larger;
				larger = num;
			} else if (larger === null ||num > large){
				large = num;
			}
	}
	return [large, larger, largest]
}