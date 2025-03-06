class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        if (nums.size() == 0) {
            return 0;

        } else {
            num = nums[0];
            for (int i = 1; i < nums.size(); i++) {
                num ^= nums[i];
            }
            return num;
        }
    }
};    