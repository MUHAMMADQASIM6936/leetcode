class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool flag = true;
        set<char> s1;
        set<char> s2;

        unordered_map<char, char> x;
        unordered_map<char, char> y;
        for (int i = 0; i < s.size(); i++) {
            char temp = s[i];
            s1.insert(temp);
        }
        for (int j = 0; j < t.size(); j++) {
            char temp = t[j];
            s2.insert(temp);
        }
        if (s1.size() == s2.size()) {

            for (int i = 0; i < s.size(); i++) {
                char temp = s[i];
                char temp1 = t[i];

                auto it = x.find(temp);

                if (it != x.end()) { 
                    if (it->second != temp1) {
                        flag = false; 
                        break;
                    }
                } else {
                    x[temp] = temp1; 
                }
            }

            if (flag) {
                return true;
            } else {
                return false;
            }
        }

        else {
            return false;
        }
    }
};