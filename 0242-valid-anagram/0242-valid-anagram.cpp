class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s1;
        bool flag = false;
        if(s.size()==t.size()){
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            s1[x] += 1;
        }
        for (int j = 0; j < t.size(); j++) {
            auto it = s1.find(t[j]);
            if (it != s1.end()) {
                int z = it->second;
                if (z != 0) {
                    flag = true;
                    it->second -= 1;
                }
                else if(z==0){
                    flag=false;
                    break;
                }

            } else {
                flag = false;
                break;
            }
        }
        }
        return flag;
    }
};