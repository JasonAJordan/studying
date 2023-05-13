var prefixCount = function(words, pref) {
  let prefLens = pref.length
  let count = 0;
  for (let i = 0; i< words.length; i++){
    if (words[i].slice(0,prefLens) == pref){
      count++
    }
  }
  return count
};

// better solu
// uses a function called startsWith
let count = 0;
for (const word of words) {
  word.startsWith(pref) && ++count;
}
return count;