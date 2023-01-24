// Took me a bit to figure this out. 


var isSym = function(left,right){
    console.log(left,right)
    if (left == null && right == null){
        return true
    } else if (left == null || right == null){
        return false
    } else if (left.val !== right.val){
        return false
    }

    return isSym(left.left, right.right) && isSym(left.right, right.left)

}

