var reverseStr = function(s, k) {
  const split = s.split('');
   
 // reverse the segment and put it back
 for (let i = 0; i < s.length; i += 2*k) {
    // this step takes out the string from split
     const reverse = split.splice(i, k).reverse();
     // til, using splice (i,0,y), can insert y into the array
     split.splice(i, 0, ...reverse);
 }
   
 return split.join('');
};