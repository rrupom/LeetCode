class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    vector<int> answer;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        answer.push_back(nums[i]);
        count++;
      }
    }

    nums.clear();
    nums.assign(answer.begin(), answer.end());

    return count;
  }
};