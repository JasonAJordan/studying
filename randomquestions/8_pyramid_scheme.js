/**************************************************************************************
Write a function `pyramidScheme(base)` that takes in an array of numbers representing
the base of a pyramid. The function should return a two-dimensional array representing
the completed pyramid. To generate an element of the next level of the pyramid,
we sum the elements below and to the left and below and to the right.

For example, given 2, 3, 7, 5, 9 as the base, we should construct this pyramid:

          85
        37  48
      15  22  26
   5   10   12   14
 2   3    7    5    9

Example:

var p1 = pyramidScheme([2, 3, 7, 5, 9]);
p1 // =>
 [
   [ 85 ],
   [ 37, 48 ],
   [ 15, 22, 26 ],
   [ 5, 10, 12, 14 ],
   [ 2, 3, 7, 5, 9 ]
 ]

var p2 = pyramidScheme([2, 2, 2, 2]);
p2 // =>
 [
   [ 16 ],
   [ 8, 8 ],
   [ 4, 4, 4 ],
   [ 2, 2, 2, 2 ]
 ]


Hint:
  array.unshift is a method we can use to add an element to the front of an array:
    var arr = ['b', 'c'];
    arr.unshift('a');
    arr; // => [ 'a', 'b', 'c' ]

Difficulty: Hard
*************************************************************************************/

function pyramidScheme(base) {

  //let pyramid = new Array(base.length).fill(0)
  //pyramid[base.length -1] = base

  let pyramid = new Array(base.length)
  pyramid[base.length - 1] = base
  let currentArray = base;

  for (let i = 0; i < base.length - 1; i++){
    
    let newRow = layerHelper(currentArray)
    currentArray = newRow
    pyramid[base.length - 2 - i] = newRow
  }
  return pyramid
}

function layerHelper(layer){
    let newArray = new Array(layer.length - 1)
  
    for (let i = 0; i < layer.length - 1; i++){
        let ele1 = layer[i];
        let ele2 = layer[i+1];
        newArray[i] = (ele1 + ele2);
    }  
    return newArray;
  }


console.log(JSON.stringify(pyramidScheme([2, 2, 2, 2])));