#include<queue>;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int elem=0;
        for(int i=0;i<k;i++){
            elem=pq.top();
            pq.pop();
        }
        return elem;
    }
};