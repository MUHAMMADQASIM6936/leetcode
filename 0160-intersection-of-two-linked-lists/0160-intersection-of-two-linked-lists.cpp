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
        int count=0;
        int count1=0;
        ListNode*temp=headA;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
         ListNode*temp1=headB;
        while(temp1!=nullptr){
            temp1=temp1->next;
            count1++;
        }
        if(count==count1){
            ListNode*temp2=headA;
             ListNode*temp3=headB;
            while(temp2!=nullptr){
                if(temp2==temp3){
                    return temp2;
                }
                else{
                    temp2=temp2->next;
                    temp3=temp3->next;
                }
            }
        }
        else if(count>count1){
            ListNode*temp2=headA;
             ListNode*temp3=headB;
              int size=0;
             while(size<(count-count1)){
                temp2=temp2->next;
                size++;
             }
            while(temp2!=nullptr){
               
                if(temp2==temp3){
                    return temp3;
                }
                else{
                     temp2=temp2->next;
                    temp3=temp3->next;
                }
            }
        }
       else if(count<count1){
            ListNode*temp2=headA;
             ListNode*temp3=headB;
             int size=0;
             while(size<(count1-count)){
                temp3=temp3->next;
                size++;
             }
            while(temp3!=nullptr){
                
                if(temp2==temp3){
                    return temp2;
                }
                else{
                    temp3=temp3->next;
                    temp2=temp2->next;
                }
            }
        }
        return nullptr;
    }
};