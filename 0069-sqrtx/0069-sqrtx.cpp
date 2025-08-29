class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int ans=INT_MIN;
        while (start <= end) {
           long long  int mid = start + (end - start) / 2;
            if (mid*mid<=x) {
                ans=mid;
                start = start+1;

            } else if (mid*mid>x) {
                end = mid - 1;
            }
        }
        return ans;
    }
};