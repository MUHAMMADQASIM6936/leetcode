class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count = 0;
        int count1 = 0;
        int size = m + n;
        vector<int> arr;
        vector<int> arr1;
        int count2 = 0;

        if (m != 0 && n != 0) {
            for (int i = 0; i < m; i++) {
                arr.push_back(nums1[i]);
            }
            for (int i = 0; i < m + n; i++) {
                if (count != m && count1 != n) {
                    if (arr[count] < nums2[count1]) {
                        arr1.push_back(arr[count]);
                        count++;
                    } else if (arr[count] > nums2[count1]) {
                        arr1.push_back(nums2[count1]);
                        count1++;
                    }

                    else {
                        arr1.push_back(arr[count]);
                        arr1.push_back(nums2[count1]);
                        count++;
                        count1++;
                    }
                } else if (count == m || count1 == m) {
                    for (int i = count; i < m; i++) {
                        arr1.push_back(arr[i]);
                    }
                    for (int i = count1; i < m; i++) {
                        arr1.push_back(nums2[i]);
                    }
                }
            }

            for (int i = 0; i < m + n; i++) {
                nums1[i] = arr1[i];
            }
        } else if (m == 0) {
            for (int i = 0; i < n; i++) {
                nums1[i] = nums2[i];
            }
        } else if (m == n) {
            for (int i = 0; i < m; i++) {
                arr.push_back(nums1[i]);
            }
            for (int i = 0; i < m + n; i++) {
                if (count != m && count1 != n) {
                    if (arr[count] < nums2[count1]) {
                        arr1.push_back(arr[count]);
                        count++;
                    } else if (arr[count] > nums2[count1]) {
                        arr1.push_back(nums2[count1]);
                        count1++;
                    }

                    else {
                        arr1.push_back(arr[count]);
                        arr1.push_back(nums2[count1]);
                        count++;
                        count1++;
                    }
                } else if (count == m || count1 == m) {
                    for (int i = count; i < m; i++) {
                        arr1.push_back(arr[i]);
                    }
                    for (int i = count1; i < m; i++) {
                        arr1.push_back(nums2[i]);
                    }
                }
            }
        }
    }
};