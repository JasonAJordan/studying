// This one I messed up my first loop as having it like i < rowIndex instead of i <=rowIndex

var getRow = function(rowIndex) {
    let fullTri = []
    for (let i = 0; i <= rowIndex; i++){
        // First 1 value
        fullTri[i] = []
        fullTri[i][0] = 1
        for(let j=1; j < i; j++){
            fullTri[i][j] = fullTri[i-1][j -1] + fullTri[i-1][j] 
        }
        // Last 1 value
        fullTri[i][i] = 1
    }
    return fullTri[rowIndex]
};