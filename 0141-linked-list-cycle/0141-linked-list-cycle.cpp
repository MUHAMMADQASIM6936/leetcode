/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while (fast != nullptr && fast->next != nullptr) {
            if (fast == slow) {
                return true; // Cycle detected
            }
            
            slow = slow->next;        // Move slow by one step
            fast = fast->next->next;  // Move fast by two steps
        }
        
        return false; // No cycle detected
    }
};
