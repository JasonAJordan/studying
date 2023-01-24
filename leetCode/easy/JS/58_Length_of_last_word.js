// kind of easy but I forgot the trim command, just googled it. 

var lengthOfLastWord = function(s) {
    let array = s.trim().split(" ")
    return array[array.length-1].length
};

// one line ver
var lengthOfLastWord2 = function(s) {
    return s.trim().split(' ').at(-1).length
};