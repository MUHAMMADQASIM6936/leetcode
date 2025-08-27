class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m1;
        int size=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            m1[num]+=1;

        }
        int ans;
        for(auto it:m1){
            if(it.second>size){
                ans=it.first;
            }
        }
        return ans;
    }
};