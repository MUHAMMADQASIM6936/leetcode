class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size(); i > 0; i--) {
            // check the last digit of current substring
            char lastDigit = num[i-1];
            if ((lastDigit - '0') % 2 != 0) {
                return num.substr(0, i); // directly return the substring
            }
        }
        return ""; // no odd found
    }
};
