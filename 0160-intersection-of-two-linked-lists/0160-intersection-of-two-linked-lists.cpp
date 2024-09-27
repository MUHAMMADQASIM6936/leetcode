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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp=headA;
        ListNode*temp1=headB;
        int size=0;
        int size1=0;
       
        while(temp->next!=nullptr){
            temp=temp->next;
            size++;

        }
         while(temp1->next!=nullptr){
            temp1=temp1->next;
            size1++;

        }
        if(size>size1){
            int count =size-size1;
              ListNode*temp2=headA;
        ListNode*temp3=headB;
        for(int i=0;i<count;i++){
            temp2=temp2->next;
        }
         if(temp2==temp3){
            return temp2;
        }
         while(temp2->next!=nullptr){
            
            if(temp2->next==temp3->next){
                return temp2->next;
            }
            temp2=temp2->next;
            temp3=temp3->next;
            
        }
        }
        else if(size1>size){
            int count=size1-size;
             ListNode*temp2=headA;
        ListNode*temp3=headB;
        
        for(int i=0;i<count;i++){
            temp3=temp3->next;
        }
         if(temp2==temp3){
            return temp2;
        }
        while(temp3->next!=nullptr){
             
            if(temp2->next==temp3->next){
                return temp3->next;
            }
            temp2=temp2->next;
            temp3=temp3->next;
        }
        }
        else if(size==size1){
            ListNode*temp2=headA;
        ListNode*temp3=headB;
        if(temp2==temp3){
            return temp2;
        }
         while(temp3->next!=nullptr){
             
            if(temp2->next==temp3->next){
                return temp3->next;
            }
            temp2=temp2->next;
            temp3=temp3->next;
        }
        }
          if(temp1->next==nullptr && temp->next==nullptr){
            if(temp==temp1){
                return temp;
            }
            
        }
      return nullptr;
    }
};