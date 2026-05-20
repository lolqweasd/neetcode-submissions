class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<vector<int>, vector<string>> mp;
        
        for (string str : strs)
        {
            vector<int> curr(26, 0);

            for (char c : str) curr[c - 'a']++;

            mp[curr].push_back(str);
        }
        
        for (auto& [key, value] : mp) res.push_back(value);

        return res;
    }
};