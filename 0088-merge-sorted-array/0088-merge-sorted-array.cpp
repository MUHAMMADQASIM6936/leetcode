class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

     int count=0;
     int count1=0;
     vector<int>arr;
     while(count<m && count1 < n){
         if(nums1[count]<nums2[count1]){
            arr.push_back(nums1[count]);
            count++;
         }
         else if(nums1[count]>nums2[count1]){
            arr.push_back(nums2[count1]);
            count1++;
         }
         else{
            arr.push_back(nums1[count]);
            arr.push_back(nums2[count1]);
            count++;
            count1++;
         }
     }   
     if(count==m){
        while(count1<n){
            arr.push_back(nums2[count1]);
            count1++;
        }
     }
     else if(count1==n){
         while(count<m){
            arr.push_back(nums1[count]);
            count++;
        }
     }
    for(int i=0;i<m+n;i++){
        nums1[i]=arr[i];
    }
    }

};