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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0){
            return head;
        }
        if(head->next==nullptr && n==1){
            head=nullptr;
            return head;
        }
        ListNode*temp=head;
        int size=1;
        while(temp->next!=nullptr){
            
            temp=temp->next;
            size++;
            
        }
        ListNode*temp2=head;
          if(size==n){
          temp2=temp2->next;
          head=temp2;
          return head;
        }
        ListNode*temp1=head;
        int count=size-n-1;
        int  i=0;
      
        while(temp1->next!=nullptr){
            if(i==count){
             temp1->next=temp1->next->next;
             break;
            }
            else{
                temp1=temp1->next;
                i++;
            }
            
        }
        
        return head;
    }
};