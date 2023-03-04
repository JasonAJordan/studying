// easy easy lc

var truncateSentence = function(s, k) {
  let array = s.split(" ")
  return array.slice(0, k).join(" ")
};