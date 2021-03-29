function twoNumberSum(array, targetSum) { 

    const sumHash = {}

    for (let i = 0; i < array.length; i++){
        let num = array[i]
        if (targetSum === num + sumHash[num] ){
            return [num, sumHash[num]]
        }
        sumHash[targetSum - num] = num;
    }

    return [];
}

// let array = [3,5,-4, 11, 1, -1]
// let targetSum = 10

// console.log(twoNumberSum(array, targetSum))