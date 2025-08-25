#include <unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            umap[num] += 1;
        }
        for (auto it : umap) {
            if (it.second == 1) {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};