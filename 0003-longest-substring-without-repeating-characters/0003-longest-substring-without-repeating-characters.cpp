class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int maxLen = 0;
        int start = 0;

        if (s == " ") return 1;
        if (s.empty()) return 0;

        unordered_map<char, int> m1;  // store last index of character

        for (int i = 0; i < s.size(); i++) {
            char temp = s[i];

            if (m1.find(temp) != m1.end() && m1[temp] >= start) {
                // duplicate found inside current substring
                start = m1[temp] + 1;         // move start forward
                count = i - start + 1;        // reset count based on new window
            } else {
                count++;                      // normal growth
            }

            m1[temp] = i;                     // update last seen index
            if (count > maxLen) maxLen = count;
        }

        return maxLen;
    }
};
