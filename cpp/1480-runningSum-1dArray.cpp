class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningNums;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            runningNums.push_back(sum);
        }

        return runningNums;
    }
};
