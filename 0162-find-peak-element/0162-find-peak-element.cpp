class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0; // Only one element

        int low = 0, high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if mid is a peak
            bool leftOk = (mid == 0 || nums[mid] > nums[mid - 1]); // Left boundary safe check
            bool rightOk = (mid == n - 1 || nums[mid] > nums[mid + 1]); // Right boundary safe check
            
            if (leftOk && rightOk)
                return mid;
            
            // If left is smaller, move right
            if (mid > 0 && nums[mid - 1] > nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1; // Should never reach here
    }
};
