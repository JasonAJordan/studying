// fun question 

var missingRolls = function(rolls, mean, n) {
  const diff = (mean * (rolls.length + n)) - rolls.reduce((a,b) => a - b)
  if (diff < n) return [];
  if (diff > 6 * n) return [];
  
  return Array(n)
    .fill(Math.ceil(diff / n), 0, diff % n)
    .fill(Math.floor(diff / n), diff % n);

};