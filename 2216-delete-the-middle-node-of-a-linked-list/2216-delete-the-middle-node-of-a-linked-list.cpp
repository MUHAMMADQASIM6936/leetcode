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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        if (head == nullptr)
            return nullptr;
        while (temp != nullptr) {
            temp = temp->next;
            count++;
        }
        if(count>1){
        int mid = count / 2;
        int count1 = 0;
        ListNode* temp1 = head;
        while (count1 < mid-1) {

            temp1 = temp1->next;
            count1++;
        }
         temp1->next = temp1->next->next;
        }
        else{
            head=nullptr;
            return head;
        }

        return head;
    }
};