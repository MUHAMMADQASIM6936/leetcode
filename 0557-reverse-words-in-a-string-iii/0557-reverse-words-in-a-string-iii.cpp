class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            if (x == ' ') {

                reverse(s.begin() + start, s.begin()+ i);
                start = i + 1;
            }
        }
         reverse(s.begin() + start, s.end());
        return s;
    }
};