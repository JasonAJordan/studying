function findThreeLargestNumbers (array){
    array.sort((a,b) => a -b)
    return [array[array.length -1], array[array.length -2], array[array.length -3]]
}

const array = [10, 5, 9, 10, 13, 15]
console.log(findThreeLargestNumbers(array))

