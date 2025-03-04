class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count;
        int max=0;
        int num;
        int size=nums.size()/2;
        if(nums.size()==0){
            return 0;
        }
        else if(nums.size()==1){
             num=nums[0];
             return num;
        }
        for(int i=0;i<nums.size()-1;i++){
            count=0;
            for(int j=i+1;j<nums.size();j++){
                    if(nums[i]==nums[j]){
                        count++;
                        
                    }
            }
            if(max<count){
                max=count;
                num=nums[i];
                
                
            }
            if(count>size){
                break;
            }
        }
        return num;
    }
};