// Tip: You can use the Array.isArray function to check whether an item
// is a list or an integer.

// runs in O(n) time 

function productSum(array, multiply = 1) {
  // Write your code here.
	let sum = 0;
	//let multiply = 1;
	
	for (let i = 0; i < array.length; i++){
			let element = array[i];
			if (Array.isArray(element)){
				 sum += productSum(element, multiply + 1);
			} else {
				sum += element;
			}
	}
	return sum * multiply
}