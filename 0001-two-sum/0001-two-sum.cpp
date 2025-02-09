#include <bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>index;
        int start=0;
        int end =nums.size()-1;
        for ( int i=0;i<nums.size()-1;i++){
             for (int j=1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    index.push_back(i);
                    index.push_back(j);
                break;
                }
                
             }
           
        }
         return index;
        
    }
};