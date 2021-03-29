function isValidSubsequence(array, sequence) {

    let j = 0;

    for (let i =0; i < array.length; i++){
        if (array[i] === sequence[j]){
            j++;
        }
    }
    return sequence.length === j; 
}

array = [5,1,22,25,6,-1,8,10]
seq = [1,6,-1,10]

console.log(isValidSubsequence(array, seq))