var checkIfPangram = function(s) {
  return new Set(s).size == 26;
  // return new Set(s.split("")).size == 26;
  // til a better way
};