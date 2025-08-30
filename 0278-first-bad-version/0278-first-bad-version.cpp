// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=0;
        int end=n;
        int ans=NULL;
        while(start<=end){
            int mid=start+(end-start)/2;
            bool flag=isBadVersion(mid);
            if(!flag){
                start=mid+1;
            }
            else if(flag){
                end=mid-1;
            }

        }
        return start;
    }
};