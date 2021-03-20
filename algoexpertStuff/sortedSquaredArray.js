function sortedSquaredArray(array) {
    // Write your code here.
      let newArray = []
      for (let i = 0; i<array.length; i++){
          newArray.push(array[i]**2)
      }
    newArray.sort((a,b) => a - b);
      return newArray
  }

//First attempt
// I should have refactor so I don't use a push statement,
// use "new Array()" / "Array[idx] = new value"

//o(nlogn) time | O(n) space. 

//There is a faster way of doing it with o(n) time.

function sortedSquaredArray2(array) {
  // after looking at video explanation
	
	const sortedSquares = new Array(array.length).fill(0);
	let smallerIdx = 0;
	let largerIdx = array.length -1;
	
	for (let i = array.length -1; i >= 0; i--){
		const smallerValue = array[smallerIdx];
		const largerValue = array[largerIdx];
		
		if (Math.abs(smallerValue) > Math.abs(largerValue)) {
			sortedSquares[i] = smallerValue ** 2;
			smallerIdx++;
		} else {
			sortedSquares[i] = largerValue ** 2;
			largerIdx--;
		}
	}

	return sortedSquares
}

console.log(sortedSquaredArray([1,2,3,4]));