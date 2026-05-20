class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq(nums.begin(), nums.end());
        int res = 0;

        for (int num : nums)
        {
            if (seq.contains(num - 1)) continue;

            int curr = 1;
            while (seq.contains(num + curr)) curr++;

            res = max(res, curr);
        }

        return res;
    }
};
