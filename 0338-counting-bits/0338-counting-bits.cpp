#include<vector>
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp;
        if (n == 0) {
            dp.push_back(0);
            return dp;
        } else if (n == 1) {
            dp.push_back(0);
            dp.push_back(1);
            return dp;
        } else {
            dp.push_back(0);
            dp.push_back(1);
            for (int i = 2; i <= n; i++) {
                dp.push_back(dp[i / 2] + (i % 2));
            }
              return dp;
        }
      
    }
};