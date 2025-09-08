class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int start = 0;
        int end = nums.size();
        int tempcount = 0;
        int totalcount = 0;
        if (nums.size() == 0) {
            return 0;
        }
        vector<int> m1;
        while (start < nums.size()) {
            int currSum = nums[start];
            if (currSum == goal) {
                tempcount++;
            }

            for (int i = start + 1; i < end; i++) {
                currSum += nums[i];
                if (currSum == goal) {
                    tempcount++;
                }
            }

            start++;
        }

        return tempcount;
    }
};