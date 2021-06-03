function powerSet(num) {

let result = 0;
let array = [...Array(num + 1).keys()];
let array2 = [[]];
array.splice(0,1)

for(let i=0; i < array.length ;i++){
    //this line is crucial! It prevents us from infinite loop
    let len = array2.length; 
    for(let x = 0; x < len ;x++){
      array2.push(array2[x].concat(array[i]))
    }
}

for (let i = 1; i < array2.length; i++){
    for (let j = 0; j < array2[i].length; j++){
        result += array2[i][j]
    }
}


return result;
}

console.log(JSON.stringify(powerSet(3)))