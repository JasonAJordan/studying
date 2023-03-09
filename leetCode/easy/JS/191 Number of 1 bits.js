var hammingWeight = function(n) {

  return n.toString(2).replaceAll("0", "").length;    
};