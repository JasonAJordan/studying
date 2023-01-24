// My solution
var isSameTree = function(p, q) {
    if (!q && !p){
        return true
    } else if (!p || !q || q.val !== p.val){
        return false 
    } else {
        return isSameTree(q.left, p.left) &&  isSameTree(q.right, p.right)
    }
     
};


// I clever js only solution I found
var isSameTree = function(p, q) {
    return JSON.stringify(p)===JSON.stringify(q)
};