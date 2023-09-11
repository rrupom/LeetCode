#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string ret = "";

        int sz = s.size();
        int increment = 2 * (numRows - 1);

        for (int r = 0; r < numRows; r++) {

            for (int i = r; i < sz; i += increment) {
                ret += s[i];

                if (r > 0 and r < numRows - 1 and (i + increment - 2 * r ) < sz) {
                    ret += s[i + increment - 2 * r];
                }
            }
        }

        return ret;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;

    string ans = sol.convert("PAYPALISHIRING", 4);
    cout << ans << endl;

    return 0;
}