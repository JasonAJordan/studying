

var lengthOfLongestSubstring = function(s) {
  let set = new Set()
  let leftIdx = 0; 
  let maxSize = 0;

  if (s.length === 0) return 0;
  if (s.length === 1) return 1;

  for (let i = 0; i < s.length; i++) {
    //console.log(set, left, maxSize, i, s[i])
    // needs a while statment so the list can keep removing any leading set values 
    // ex "pwwkew" -> set [pw], left 1 -> [w] , left 2
    // left needs to increment by 2 as w wasn't the first value in the set.  
    if (set.has(s[i])) {
      set.delete(s[leftIdx])
      leftIdx++;
    }
    set.add(s[i]);
    maxSize = Math.max(maxSize, i - leftIdx + 1)
    console.log(set,  leftIdx, maxSize, i, s[i])
  }
  return maxSize;
};


console.log(lengthOfLongestSubstring("pwwkew"))