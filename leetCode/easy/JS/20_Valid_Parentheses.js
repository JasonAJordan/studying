var isValid = function(s) {
    let hash = {")" : "(", "]": "[", "}" : "{"}
    let tempArray = []

    for (let i = 0 ; i < s.length; i++){
        if (s[i] == ")" || s[i] == "]" ||s[i] == "}" ){
            let lastStr = tempArray.pop()
            if (hash[s[i]] !== lastStr){
                return false 
            }
        }else {
            tempArray.push(s[i])
        }
        //console.log(tempArray)
    }
    return (tempArray.length == 0)
};

// imo a better solution
var isValid2 = function(s) {
    const parenthesesDictionary = {
        '(': ')',
        '{': '}',
        '[': ']'
    }

    const arr = [];

    for(let i = 0; i < s.length; i++) {
        if(!parenthesesDictionary[s[i]]) {
            if(arr.length === 0 || arr.pop() !== s[i]) return false;
        }
        else {
            arr.push(parenthesesDictionary[s[i]]);
        }    
    }

    return arr.length === 0;
    
}; 