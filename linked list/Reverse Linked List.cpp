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



//



ListNode* reversList(ListNode* head) {
  if(!head || !head->next) 
    // checking if head is null or nextpointer of head is null
    return head;
  
}
 ListNode* reversed = reverseList(head->next); 
//recursively call the function with next pointer of head 

head->next->next = head;
// update the next pointer of previouse node to point to the current node

head->next = NULL;
// update the current ndoe's next pointer to null
return reversed;
}
