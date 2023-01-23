from typing import List

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        
        stringdict = {"]":"[", "}":"{", ")":"("}
        
        for i in s:
            if i in stringdict.values():
                stack.append(i)
            elif i in stringdict.keys():
                if stack == [] or stack.pop() != stringdict[i]:
                    return False
            else:
                return False
        return stack == []