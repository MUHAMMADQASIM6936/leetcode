class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // Ensure mid is even (pairs start at even index)
            if (mid % 2 == 1) mid--;

            // Check pair (mid, mid+1)
            if (nums[mid] == nums[mid + 1]) {
                // single element is on right side
                start = mid + 2;
            } else {
                // single element is on left side (or at mid)
                end = mid;
            }
        }
        return nums[start];
    }
};
