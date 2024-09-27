class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to help easily build the merged list
        ListNode dummy;
        ListNode* temp3 = &dummy;

        // Traverse both lists and merge them
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                temp3->next = list1;
                list1 = list1->next;
            } else {
                temp3->next = list2;
                list2 = list2->next;
            }
            temp3 = temp3->next;
        }

        // If there are remaining nodes in either list, append them
        if (list1 != nullptr) {
            temp3->next = list1;
        } else if (list2 != nullptr) {
            temp3->next = list2;
        }

        // The merged list starts after the dummy node
        return dummy.next;
    }
};
