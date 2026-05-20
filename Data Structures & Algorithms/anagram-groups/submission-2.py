class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = defaultdict(list)

        for s in strs:
            curr = "".join(sorted(s))

            mp[curr].append(s)

        return list(mp.values())
