#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int count = 0; // Count of zeros moved
        
        for (int i = 0; i < size - count; i++) {
            if (nums[i] == 0) {
                nums.push_back(0);  // Move zero to the end
                nums.erase(nums.begin() + i);  // Erase from current position
                i--;  // Adjust index to recheck shifted element
                count++; // Keep track of moved zeros
            }
        }
    }
};
