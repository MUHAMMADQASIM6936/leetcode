class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0;
        int end = start ;
        int countzeros = k;
        int max = 0;
        int count = 0;
        int index = INT_MIN;
        unordered_map<int, int> m1;
        while (end < nums.size()) {
            if (nums[end] == 1) {
                count++;
                end++;
            } else if (nums[end] == 0) {
                if (countzeros > 0) {
                    count++;
                    countzeros--;
                    end++;
                } else {
                    if (max < count) {
                        max = count;
                        count = 0;
                        countzeros = k;
                        start++;
                        end = start;
                    } else {
                        count = 0;
                        countzeros = k;
                        start++;
                        end = start;
                    }
                }
            }
        }
        if(max<count){
            max=count;
        }
        return max;
    }
};