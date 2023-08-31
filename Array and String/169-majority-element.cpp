class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        auto it = mp.begin();
        int element = it->first;
        int max = it->second;

        for (auto it : mp) {
            if (it.second > max) {
                max = it.second;
                element = it.first;
            }
        }

        return element;
    }
};