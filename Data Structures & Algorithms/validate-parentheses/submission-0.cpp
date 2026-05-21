class Solution {
public:
    bool isValid(string s) {
        stack<char> prnt;

        for (char c : s)
        {
            if (c == '(') prnt.push(')');

            else if (c == '[') prnt.push(']');

            else if (c == '{') prnt.push('}');

            else
            {
                if (prnt.empty() || prnt.top() != c) return false;

                prnt.pop();
            }
        }

        return prnt.empty();
    }
};
