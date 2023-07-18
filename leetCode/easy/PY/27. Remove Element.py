from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
      pointer = 0
      count = 0

      for num in nums:
        if num == val:
          continue
        else:
          nums[count] = num
          count = count + 1


      return count

for i in range (0):
  print (15// 2)