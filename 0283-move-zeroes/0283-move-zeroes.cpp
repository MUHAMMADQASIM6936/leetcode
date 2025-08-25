#include<algorithm>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       auto newEnd = std::remove(nums.begin(), nums.end(), 0);
       fill(newEnd, nums.end(), 0);
    }
};