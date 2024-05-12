class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        long long maxSum = LONG_MIN;
        long long currentSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            if(currentSum > maxSum) {
                maxSum = currentSum;
            }
            if(currentSum < 0) {
                currentSum = 0;
            }
        }
        return (maxSum);
    }
};