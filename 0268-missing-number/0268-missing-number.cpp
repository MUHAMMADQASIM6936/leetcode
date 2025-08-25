class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int element=-1;
        bool flag=false;
        for(int i=0;i<=nums.size();i++){
            flag=false;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    flag=true;
                    break;
                }
                
            }

            if(flag==false){
                element=i;
                break;
            }
           
        }
        return element;
    }
};