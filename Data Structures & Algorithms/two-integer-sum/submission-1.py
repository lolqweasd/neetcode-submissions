class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        two = {}

        for i in range(len(nums)):
            prev = target - nums[i]

            if prev in two: return [two[prev], i]

            two[nums[i]] = i
        
        return []