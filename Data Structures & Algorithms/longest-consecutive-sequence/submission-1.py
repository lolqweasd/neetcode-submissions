class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        seq = set(nums)
        res = 0

        for num in seq:
            if num - 1 in seq: continue

            curr = 1
            while num + curr in seq: curr += 1

            res = max(res, curr)
        
        return res