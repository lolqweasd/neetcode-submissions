class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i <= nums.size() - 1; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int l = i + 1, r = nums.size() - 1;

            while (l < r)
            {
                int total = nums[i] + nums[l] + nums[r];

                if (total == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;

                    while (nums[l] == nums[l - 1] && l < r) l++;
                    while (nums[r] == nums[r + 1] && l < r) r--;
                }

                else if (total < 0) l++;

                else r--;
            }
        }

        return res;
    }
};
