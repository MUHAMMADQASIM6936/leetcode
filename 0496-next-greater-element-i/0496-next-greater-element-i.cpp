class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>m1;
        vector<int> v1;
        for (int i = 0; i < nums2.size(); i++) {
            int num = nums2[i];
            m1[num] = i;
        }

        for (int j = 0; j < nums1.size(); j++) {
            int ans = nums1[j];
            auto it = m1.find(ans);
            bool flag = false;
            if (it != m1.end()) {
                int index = it->second;
                
                for (int k = index; k < nums2.size(); k++) {
                    if (nums2[k] > ans) {
                        v1.push_back(nums2[k]);
                        flag = true;
                        break;
                    }
                }
            }
            if (!flag) {

                v1.push_back(-1);
            }
        }
        return v1;
    }
};
