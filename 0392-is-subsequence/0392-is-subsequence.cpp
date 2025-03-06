class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start=0;
        bool flag=false;
        if(s.size()==0){
            return true;
        }
        else if(t.size()==0){
            return false;
        }
        else{
        for(int i=0;i<t.size();i++){
            if(s[start]==t[i]){
                start++;
            }
        }

        }
        if(start==s.size()){
            flag=true;

        }
        else{
            flag=false;
        }
        return flag;
    }
};