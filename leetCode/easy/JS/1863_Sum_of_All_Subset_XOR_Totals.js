// This one I needed help with

var subsetXORSum = function(nums) {
  const subsets = [[]]
  let sum = 0
  for(const el of nums){
      const last = subsets.length-1
      for(let i = 0; i<=last; i++){
          subsets.push([...subsets[i],el])
      }
  }
  
  for(let j = 0; j<subsets.length;j++){
      if (subsets[j].length === 0) sum = sum +0 // couldn't the user just use "continue??"
      else if(subsets[j].length === 1) sum = sum + parseInt(subsets[j]) // no need for XOR opp
      else sum = sum + parseInt(subsets[j].reduce((acc,curr) => acc^curr))   // using reduce to XOR opp 
  }
  return sum
};

var createSubsets = function(nums){
  const subsets = [[]]
  let sum = 0
  for(const el of nums){
      const last = subsets.length-1
      for(let i = 0; i<=last; i++){
          subsets.push([...subsets[i],el])
      }
  }
  return subsets;
}

console.log(createSubsets([2,5,8]))