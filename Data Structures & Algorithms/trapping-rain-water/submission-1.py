class Solution:
    def trap(self, height: List[int]) -> int:
        l, r, area = 0, len(height) - 1, 0
        lmax, rmax = 0, 0

        while l < r:
            if height[l] <= height[r]:
                lmax = max(lmax, height[l])
                area += lmax - height[l]
                l += 1

            else:
                rmax = max(rmax, height[r])
                area += rmax - height[r]
                r -= 1
        
        return area