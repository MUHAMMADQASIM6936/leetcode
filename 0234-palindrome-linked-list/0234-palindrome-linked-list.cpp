/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        bool flag = false;
        int count = 0;
        if(head==nullptr)return false;
        while (temp != nullptr) {
            temp = temp->next;
            count++;
        }
        int arr[count];
        ListNode*temp1 = head;
        for (int i = 0; i < count; i++) {
            int x = head->val;
            arr[i] = x;
            head = head->next;
        }
        int start = 0;
        int end = count-1;
        while (start < count) {
            if (arr[start] == arr[end]) {
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
};