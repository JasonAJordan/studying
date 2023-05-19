var findLucky = function(arr) {
  const map = new Map();
  for (x of arr) {
      map.has(x) ? map.set(x, map.get(x) + 1) : map.set(x, 1);
  }
  return Math.max(...arr.filter(e => map.get(e) === e), -1);
};