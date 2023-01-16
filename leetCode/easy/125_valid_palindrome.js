var isPalindrome = function(s) {
    let newS = s.toLowerCase().replace(/[^a-z0-9]/g,"")
    console.log(newS)
    for (let i = 0; i < newS.length; i++){
        if (newS[i] != newS[newS.length - 1 - i]){
            return false
        }
    }
    return true
};