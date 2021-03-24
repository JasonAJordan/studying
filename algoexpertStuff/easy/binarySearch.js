//first attempt, forgot about the edge case and mid -1 / mid + 1
// O(log(n) time)
function binarySearch(array, target) {
  // Write your code here.
	return helper(array, target, 0, array.length - 1)
}

function helper(array, target, start, end){
	if (start > end) return -1;
	
	let mid = Math.round((start + end) / 2) 
	
	if (array[mid] === target){
		return mid;
	} else if (array[mid] > target){
		return helper(array, target, start, mid - 1)
	} else {
		return helper(array, target, mid + 1, end)
	}
	
}

//This helper is better! o(1) space.
function helper2(array, target, start, end){
	//if (start > end) return -1;
	while (start <= end){
	let mid = Math.round((start + end) / 2) 
	if (array[mid] === target){
		return mid;
	} else if (array[mid] > target){
		 end = mid - 1;
	} else {
		 start = mid + 1;
	}
	}
	return -1
}