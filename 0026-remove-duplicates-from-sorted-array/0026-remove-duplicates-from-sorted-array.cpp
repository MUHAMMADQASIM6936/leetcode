class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;

        while (count < nums.size() - 1) {
            if (nums[count] == nums[count + 1]) {
                nums.erase(nums.begin() + count + 1); // Remove duplicate
            } else {
                count++; // Move to the next element only when no duplicate is removed
            }
        }

        return nums.size(); // Return the new size of the array
    }
};
