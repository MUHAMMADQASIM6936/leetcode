#include <cwctype>
class Solution {
public:
    bool isPalindrome(string s) {
        bool flag = false;
        string temp;
        if (s.size() == 0 || s == " ") {
            return true;
        } else {
            for (int i = 0; i < s.size();) { 
                if (!iswalnum(s[i])) { 
                    s.erase(i, 1);    
                } else {
                    temp.push_back(tolower(s[i]));
                    i++; 
                }
            }
         if(temp.empty()){
                    flag=true;
                }
           
            int start = 0;
            int end = temp.size()-1;
            while (start <= end) {
 if (temp[start] == temp[end]) {
                    flag = true;
                    start++;
                    end--;

                } else {
                    flag = false;
                    break;
                }
            }
            return flag;
        }
    }
};