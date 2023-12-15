// Runtime: 4 ms, beats 100% of cpp submissions
// Memory Usage: 10 MB, 88.7% of cpp submissions
// Time complexity: 

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigCount = 0;
        int numDig = 0;
        for(int num : nums) {
            while(num != 0) {
                numDig++;
                num = num / 10;
            }
            if((numDig%2) == 0) {
                evenDigCount++;
            }
            numDig = 0;
        }
        return evenDigCount;
    }
};
