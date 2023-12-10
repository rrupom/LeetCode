class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        if (sz == 1) return strs[0];
        string cmp = "";
        int mn = INT_MAX;
        for (int i = 0; i < sz; i++) {
            if (strs[i].size() < mn) {
                mn = strs[i].size();
            }
        }

        for (int i = 0; i < mn; i++) {
            char curr = strs[0][i];
            for (int j = 1; j < sz; j++) {
                if (curr != strs[j][i])
                    return cmp;
            }
            cmp += curr;
        }

        return cmp;

    }
};