class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False

        ana = defaultdict(int)

        for c in s: ana[c] += 1

        for c in t:
            ana[c] -= 1

            if ana[c] < 0: return False
        
        return True