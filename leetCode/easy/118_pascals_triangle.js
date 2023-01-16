// My first thought. 

var generate = function(numRows) {
    const tri = [[1],[1,1]]
    // edge cases 
    if (numRows == 1){
        return [[1]]
    }
    else if (numRows == 2){
        return tri
    }

    // mainloop
    for (let i = 2; i < numRows; i++){
        //console.log(tri, tri[i-1], i)
        let newLayer = [1]
        for (let j = 1; j < i ; j++){
            newLayer.push(tri[i-1][j-1] + tri[i-1][j])
        }
        newLayer.push(1)
        tri.push(newLayer)
    }
    return tri
};

// Better solution 

var generate = function(numRows) {
    var pascal = [];
    for (var i = 0; i < numRows; i++) {
        pascal[i] = [];
        pascal[i][0] = 1;
        for (var j = 1; j < i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]
        }
        // This replaces array[0][0] = 1 with 1, even though it runs twice it works with the loops
        pascal[i][i] = 1;
    }
    return pascal;
};