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
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==nullptr){
            return nullptr;
        }
    
        ListNode*temp=head->next;
        ListNode*temp1=head;
        
       
        while(temp1->next!=nullptr){
            if(temp1->val==temp->val){
                temp1->next=temp->next;
                
                temp=temp->next;
                
            }
            else{
                temp=temp->next;
                temp1=temp1->next;
            }

        }
          return head;
    }
  
};