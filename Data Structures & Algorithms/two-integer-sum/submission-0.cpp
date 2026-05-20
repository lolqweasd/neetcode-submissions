class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> two;

        for (int i = 0; i < nums.size(); i++)
        {
            if (two.contains(target - nums[i])) return {two[target - nums[i]], i};

            two[nums[i]] = i;
        }

        return {};
    }
};
