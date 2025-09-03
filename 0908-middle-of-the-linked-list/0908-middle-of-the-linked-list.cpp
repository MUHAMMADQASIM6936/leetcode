class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            temp = temp->next;
            count += 1;
        }
        
        int mid = count / 2;  
        
        int count1 = 0;
        ListNode* temp1 = head;
        while (temp1 != nullptr) {
            if (count1 == mid) {
                return temp1;
            }
            temp1 = temp1->next;
            count1 += 1;
        }
        
        return nullptr; 
    }
};
