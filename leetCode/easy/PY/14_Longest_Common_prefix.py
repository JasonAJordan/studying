from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
      if str == []: return ""
      shortest = min(strs, key=len)
      prefix = ""
      for i, char in enumerate(shortest):
            for words in strs:
                if words[i] != char: 
                    return shortest[:i]
      return shortest