function longestPalindrome(s) {
  // ll: Left index of the longest palindrome.
  // rr: Right index of the longest palindrome.
  let ll = 0, rr = 0;

  // Iterate all palindromes with center indices
  // [..., i, ...] or [... i, i+1, ...]
  for (let i = 0; i < s.length; i++) {

    // this loop is need for cases like "cbabe" or "cbaabe"
    for (let j of [i, i+1]) {
      // til, loops can be increamented/decmented at two points
      for (l = i, r = j; s[l] && s[l] === s[r]; l--, r++)

        // Found a new palindrome [l, ..., i, j, ..., r]
        // Update the ll, rr if the newly found palindrome is longer than the
        // existing one.
        [ll, rr] = (r-l+1) > (rr-ll+1) ? [l, r] : [ll, rr];
    }
  }
  return s.slice(ll, rr+1);
  //return s.substring(ll, rr+1);
}

console.log(longestPalindrome("cbbaabbe"))

// What I would type up

var longestPalindrome = function(s) {
  let maxLeft = 0
  let maxRight = 0


  for (let i = 0; i<s.length; i++){
    for (let j = i; j <= i + 1; j++){ //aba vs abba
      for (l = i, r = j; s[l] && s[l] === s[r]; l--, r++){
        [maxLeft, maxRight] = (r-l+1) > (maxRight-maxLeft+1) ? [l, r] : [maxLeft, maxRight];
      }
    }
  }
  return s.slice(maxLeft, maxRight+1);
};