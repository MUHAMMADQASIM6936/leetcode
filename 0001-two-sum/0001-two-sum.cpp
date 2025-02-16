#include <bits/stdc++.h>
#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp; // Stores {value, index}

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // Check if complement exists in map
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i}; // Return indices
        }

        // Store current number and its index
        mp[nums[i]] = i;
    }

    return {}; // Return empty if no solution
}
    
};