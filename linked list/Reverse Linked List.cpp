//leetcode question number 
//206. Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *tmp(nullptr), *prev(nullptr);
        while (head != nullptr) {
            tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        return prev;
        
    }
};
