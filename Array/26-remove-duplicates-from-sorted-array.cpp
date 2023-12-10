class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> answer;
        answer.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                answer.push_back(nums[i]);
            }
        }

        nums.clear();
        nums.assign(answer.begin(), answer.end());
        return nums.size();
    }
};