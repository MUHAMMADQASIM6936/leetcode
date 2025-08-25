class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prevcount = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else if (nums[i] != 1) {
                if (prevcount < count){
                prevcount = count;
                count = 0;
                }
                else{
                    count=0;
                }
            }
        }
        if (prevcount == 0) {
            return count;
        } else if (prevcount < count) {
            return count;
        } else {
            return prevcount;
        }
    }
};