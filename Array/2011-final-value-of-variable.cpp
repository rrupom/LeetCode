class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int total = 0;
        for (int i = 0; i < operations.size(); i++) {
            string sub = operations[i];
            if (sub[0] == '-') {
                --total;
            } else if (sub[1] == '-') {
                total--;
            } else {
                ++total;
            }
        }

        return total;
    }
};