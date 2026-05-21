class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1, area = 0;
        int lmax = 0, rmax = 0;

        while (l < r)
        {
            if (height[l] <= height[r])
            {
                lmax = max(lmax, height[l]);
                area += lmax - height[l];
                l++;
            }
            else
            {
                rmax = max(rmax, height[r]);
                area += rmax - height[r];
                r--;
            }
        }

        return area;
    }
};
