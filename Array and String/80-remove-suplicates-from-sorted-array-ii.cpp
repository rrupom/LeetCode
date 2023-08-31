class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> answer;
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto it : mp) {
            if (it.second >= 2) {
                answer.push_back(it.first);
                answer.push_back(it.first);
            } else {
                answer.push_back(it.first);
            }
        }

        nums.clear();
        nums.assign(answer.begin(), answer.end());

        return nums.size();
    }
};