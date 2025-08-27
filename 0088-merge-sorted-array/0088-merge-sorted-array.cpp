class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>num;
        for(int i=0;i<m;i++){
            num.push_back(nums1[i]);
        }
        int start=0;
        int start1=0;
        int size=0;
        while(start<m && start1<n){
            if(num[start]>nums2[start1]){
                nums1[size]=nums2[start1];
                start1++;
                size++;
            }
            else if(num[start]<nums2[start1]){
                nums1[size]=num[start];
                start++;
                size++;
            }
            else if(num[start]==nums2[start1]){
                nums1[size]=num[start];
                start++;
                size++;
                nums1[size]=nums2[start1];
                start1++;
                size++;

            }
        }
        if(start<m){
        for(int i=start;i<m;i++){
            nums1[size]=num[i];
            size++;
        }

        }
        else if(start1<n){
        for(int j=start1;j<n;j++){
            nums1[size]=nums2[j];
            size++;
        }

        }
    }
};