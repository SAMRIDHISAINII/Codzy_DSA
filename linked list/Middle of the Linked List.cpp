// leetcode question number 
// 876 middle of the linkedlist

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* step1 = head;
        ListNode* step2 = head;
        
        //if list has odd length, step2 will be the last node
        //if list has even length, step2 will be NULL
        while(step2!=NULL && step2->next!=NULL){
            step1 = step1->next;
            step2 = step2->next->next;
        }
        
        return step1;
        
    }
};
