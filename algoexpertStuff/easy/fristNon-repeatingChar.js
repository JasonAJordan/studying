function firstNonRepeatingCharacter(string) {
	
	let hash = {};
	
	for (let i = 0; i < string.length; i++){
			let ele = string[i]
			hash[ele] ? hash[ele]++ : hash[ele] = 1;
	}
	
	for (let i = 0; i < string.length; i++){
		//console.log(hash[string[i]])
		if (hash[string[i]] === 1) return i;
	}
	
  return -1;
}
