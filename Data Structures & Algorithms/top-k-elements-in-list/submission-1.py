class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = defaultdict(int)
        for num in nums: count[num] += 1

        freq = [[] for _ in range(len(nums) + 1)]
        for num, cnt in count.items(): freq[cnt].append(num)

        res = []
        i = len(nums)
        while len(res) < k:
            for num in freq[i]: res.append(num)

            i -= 1
        
        return res