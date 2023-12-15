// Runtime: 22 ms, beats 90.59% of cpp submissions
// Memory Usage: 36.4 MB, beats 64.77% of cpp submissions
// Time Complexity: 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int result = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                count = 0;
            } else {
                count++;
                result = max(count, result);
            }
        }
        return result;
    }
};
