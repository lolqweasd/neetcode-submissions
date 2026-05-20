class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;

        for (string& str : strs)
        {
            string curr = str;
            sort(curr.begin(), curr.end());

            mp[curr].push_back(str);
        }

        for (auto& [key, value] : mp) res.push_back(value);

        return res;
    }
};