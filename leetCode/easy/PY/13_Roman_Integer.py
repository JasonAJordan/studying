from typing import List

class Solution:
    def romanToInt(self, s: str) -> int:
      dicHash = { "I" : 1 
                , "V" : 5
                , "X" : 10
                , "L" : 50
                , "C" : 100
                , "D" : 500
                , "M" : 1000
                }

      sum = 0
      for i, x in enumerate (s):
        curr = dicHash[s[i]]
        pre = dicHash[s[i-1]]
        if i > 0 and curr > pre:
          sum += curr - 2 * pre
        else: 
          sum += curr
      return sum