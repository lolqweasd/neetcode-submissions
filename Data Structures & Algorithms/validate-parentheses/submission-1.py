class Solution:
    def isValid(self, s: str) -> bool:
        prnt = []

        for c in s:
            if c == '(': prnt.append(')')

            elif c == '[': prnt.append(']')

            elif c == '{': prnt.append('}')

            else:
                if not prnt or prnt[-1] != c: return False

                prnt.pop()
            
        return not prnt