#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        bool flag = false;
        int pos = 0;
        vector<int> arr;
        if(nums.size()>1){
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1] || nums[i]==nums[i+1]) {
                flag = true;
            } else {
                flag = false;
                pos = i;
                break;
            }
        }

        if (!flag) {
            for (int i = pos+1; i <= nums.size() - 1; i++) {
                arr.push_back(nums[i]);
            }
            for (int i = 0; i <= pos; i++) {
                arr.push_back(nums[i]);
            }
        } else {
            arr = nums;  
        }

        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] < arr[i + 1] || arr[i]==arr[i+1]) {
                flag = true;
            } else {
                flag = false;
                break;
            }
        }
        }
        else if (nums.size()==1){
            flag=true;
        }
        else{
            flag=false;
        }
        return flag;
    }
};
