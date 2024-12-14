class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int k=1;
        while (count < nums.size() - 1) {
            
            if (nums[count] == nums[count + 1]) {
                k++;
                if(k>2){
                nums.erase(nums.begin() + count + 1); // Remove duplicate
                
                }
                else{
                   
                    count++;
                   
                }
            } else {
                k=1;
                count++; // Move to the next element only when no duplicate is removed
            }
        }

        return nums.size(); // Return the new size of the array
    }
};
