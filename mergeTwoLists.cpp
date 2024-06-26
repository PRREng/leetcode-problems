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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if (list1 == nullptr || list2 == nullptr) 
            return (list1 == nullptr) ? list2 : list1;
        
        ListNode * head, next;
        if (list1->val <= list2->val) {
            next = list1->next;
            list1->next = mergeTwoLists(next, list2);
            head = list1;
        } else {
            next = list2->next;
            list2->next = mergeTwoLists(list1, next);
            head = list2;
        }
        return head;
    }
};
