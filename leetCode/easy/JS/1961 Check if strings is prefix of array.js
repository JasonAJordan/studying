var isPrefixString = function(s, words) {
  let str = "";

  //for (let i = 0; i < words.length; i++){
  for (let word of words){
    str += word
    if (str == s) {
      return true
    }
  }
  return false
};