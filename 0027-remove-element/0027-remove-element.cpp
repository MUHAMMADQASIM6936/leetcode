class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int count1 = nums.size()-1;
        int k = 0;
        while (count <= count1) {
            if (nums[count] == val) {
                int temp;
                temp = nums[count];
                nums[count] = nums[count1];
                nums[count1] = temp;
                nums[count1] = '_';
                count1--;
                
            } else if (nums[count1] == val) {
                nums[count1] = '_';
                count1--;
                
            } else if (nums[count] != val) {
                count++;
                
            }
            k=count1+1;
        }
        return nums, k;
    }
};