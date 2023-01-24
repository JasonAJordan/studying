from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
      dicNums = {}
      # num : i 

      for i, x in enumerate (nums): 
        if x in dicNums:
          return [dicNums[x], i]
        else :
          dicNums[target - x] = i
      return []