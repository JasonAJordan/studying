function bubbleSort(array) {
  // Write your code here.
	let sorted = false; 
	let loops = 0;
	
	while(!sorted){
		sorted = true;
		for (let i = 0; i < array.length - 1 - loops; i++){ 
			if (array[i] > array[i+ 1]){
				swapHelper(i, i + 1, array);
				sorted = false
			}	
		}
		loops++;
	}
	return array
}

function swapHelper(i, j, array){
	const temp = array[j];
	array[j] = array[i];
	array[i] = temp;
}
