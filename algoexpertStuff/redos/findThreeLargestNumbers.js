function findThreeLargestNumbers (array){
    array.sort((a,b) => a -b)
    return [array[array.length -1], array[array.length -2], array[array.length -3]]
}

//nlog(n) time BAD!!!
const array = [10, 5, 9, 10, 13, 15]
console.log(findThreeLargestNumbers(array))

function FindThreeLargest(array){

    let largest = null; 
    let larger = null;
    let large = null;

    // for (let i = 0; i <)
}