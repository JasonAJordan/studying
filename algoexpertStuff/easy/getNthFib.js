function getNthFib(n) {
  // Write your code here.

	//edge cases / starting: 
	if (n < 1 ) return 0;
	if (n === 2 ) return 1; 
	// recurtion 
	return getNthFib(n - 1) + getNthFib(n - 2)
}
// O(n^2) time, bad
//3 
//0, 1, 1


function getNthFib2(n) {
    // Write your code here.
  
    if (n <= 1) return 0; // I forgot about the edge case on my first try :(
    let array = [0,1]; 

    let cycles = 2 

    while (cycles < n){

        let nextNumber = array[0] + array[1];
        array[0] = array[1];
        array[1] = nextNumber;
        cycles++;
    }
    return array[1]
    //Solution's return here
    // return n > 1 ? array[1] : array[0]
}