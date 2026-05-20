class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> ana;

        for (char c : s) ana[c]++;

        for (char c : t)
        {
            ana[c]--;

            if (ana[c] < 0) return false;
        }

        return true;
    }
};
