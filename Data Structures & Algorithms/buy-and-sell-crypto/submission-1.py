class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mini = prices[0]
        best = 0

        for price in prices:
            mini = min(mini, price)

            best = max(best, price - mini)
        
        return best