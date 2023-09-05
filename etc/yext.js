// In your preferred language, write a function that:
// - Takes as arguments two sorted arrays of integers
// - Combines the values of these arrays into a single sorted array, and returns it

let array1 = [1,2, 5, 7, 10]
let array2 = [3, 5, 8,11]
let array3 = [4]

function mergeSorted(arr1, arr2){
  let newArr = []
  let idx1 = 0
  let idx2 = 0

  while (idx1 < arr1.length && idx2 < arr2.length){
    if (arr1[idx1] < arr2[idx2]){
      newArr.push(arr1[idx1])
      idx1++
    } else {
      newArr.push(arr2[idx2])
      idx2++
    }
  }
  if (idx1 <= arr1.length){
    newArr = newArr.concat(arr2.slice(idx2))
  } else {
    newArr = newArr.concat(arr1.slice(idx1 ))
  }

  return newArr

  // OR USE .sort 
  // newArr = arr1.concat(arr2)
  // newArr.sort(a,b) => (a - b)
}

console.log(mergeSorted(array1, array2))