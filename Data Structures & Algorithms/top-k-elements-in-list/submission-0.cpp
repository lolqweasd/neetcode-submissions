class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) count[num]++;

        vector<vector<int>> freq(nums.size() + 1);
        for (auto& [num, cnt] : count) freq[cnt].push_back(num);

        vector<int> res;
        for (int i = nums.size(); i >= 0 && res.size() < k; i--)
            for (int num : freq[i]) res.push_back(num);

        return res;
    }
};