class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        int ans = INT_MIN;
        for (int i = 1; i < strs.size(); i++) {
            string temp = strs[i];
            int start = 0;
            int end = temp.size();
            while (start < end) {
                if (s[start] == temp[start]) {
                    start++;
                } else {
                    break;
                }
            }
            
             ans = start;
            s= s.substr(0, ans);
        }
       
        string ans1 = s.substr(0, ans);
    return ans1;
    }
    

};