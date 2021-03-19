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