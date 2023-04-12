var titleToNumber = function(columnTitle) {
  let result = 0;
  for (let i = 0; i < columnTitle.length; i++) {
    const charIndex = columnTitle.charCodeAt(columnTitle.length - i - 1) - 'A'.charCodeAt(0) + 1
    result += charIndex * (26 ** i)
  }
  return result;
}