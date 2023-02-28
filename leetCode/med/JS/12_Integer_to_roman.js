var intToRoman = function(num) {
  const val = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
  const rom = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]

    let ans = ""
    for (let i = 0; num; i++)
        while (num >= val[i]) {
          ans += rom[i]
          num -= val[i]
        }
    return ans
};

// self testing 2nd time
var intToRoman2 = function(num) {
  const val = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
  const rom = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
  let string = ""

  while (num > 0){
    for (let i =0; i < val.length; i++){
      if (num >= val[i]){
        num -= val[i]
        string = string + rom[i]
        break; 
      }
    }
  }
  return string; 
};