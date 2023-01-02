// 2023

var romanToInt = function(s) {
    let romanHash = {"I": 1, "V" : 5, "X": 10, "L" : 50, "C": 100, "D" : 500, "M": 1000 }
    let sum = romanHash[s[0]];
    for (let i = 1; i < s.length; i++){
        let cur= s[i]
        let pre = s[i-1]
        if (romanHash[cur] <= romanHash[pre]){
            sum = sum + romanHash[cur]
        }  else {
            sum = sum - (2*romanHash[pre]) + (romanHash[cur] );
        }

    }
    return sum
};

// 2023 solution
const map = { 'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000};
let num = 0;

for(let i = 0; i < s.length; i++) {
    const curr = map[s[i]], next = map[s[i+1]];
    if(curr < next) num -= curr;
    else num += curr;
}
return num; 

// based on 2022 worked I did
function romanToInt(str1) {
    if(str1 == null) return -1;
    var num = char_to_int(str1.charAt(0));
    var pre, curr;
    
    for(var i = 1; i < str1.length; i++){
        curr = char_to_int(str1.charAt(i));
        pre = char_to_int(str1.charAt(i-1));
            if(curr <= pre){
                num += curr;
            } else {
            num = num - pre*2 + curr;
        }
    }
    
    return num;
    }
    
    function char_to_int(c){
        switch (c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
    }
    