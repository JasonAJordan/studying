// Assume we have the following list: numberList=[2,8,9,1,6,3]

// Write a "while loop" that prints the index of the values in numberList that are less than or
// equal to 3.

// Your code should work regardless of the size of numberList. 

// For the above list the output would be 0,3,5 because numberList[0] is 2, 
// numberList[3] is 1 and numberList[5] is 3.

function lessThanThreeCount(list){ // use def function_name    i think...

    let length = list.length // use len(list)
    let idx = 0;

    while (idx < length){
        if (list[idx] <= 3) {
            console.log(idx) //use print(idx) 
        }   
        idx++; // use idx += 1
    }
}

const numberList1 = [2,8,9,1,6,3]
lessThanThreeCount(numberList1)