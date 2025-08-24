class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> s1;
        int count = 1;
        if (nums.size() == 0) {
            return 0;
        } else if (nums.size() == 1) {
            return 1;
        } else if (nums.size() > 1) {
            s1.push(nums[0]);

            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] != s1.top()) {
                    count++;
                    s1.push(nums[i]);
                }
            }
            for (int i = count-1; i >= 0; i--) {

                nums[i] = s1.top();
                s1.pop();
            }
        }
        return count;
    }
};