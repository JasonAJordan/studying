var longestCommonPrefix = function(strs) {
    for (let i = 0; i<strs[0].length; i++){
        for (let str of strs){
            let firstChar = str[i];
            let curChar = strs[0][i]
            if (firstChar !== curChar){
                return str.slice(0,i)
            }
        }
    }
    return strs[0]
};


// better solution
let longestCommonPrefix2 = function(strs) {
    let prefix = ""
    for(let i=0; i< strs[0].length; i++){
        const character = strs[0][i]
        for(let j = 1;j < strs.length; j++){
            if(strs[j][i] !== character) return prefix
        }
        prefix += character
    }
    return prefix
 };
 longestCommonPrefix(["flower","flow","flight"])