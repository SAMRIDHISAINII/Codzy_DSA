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
//     we are given with two non empty linked list 
//     two non neg integer
//     stored in reversed order
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         using dummy
        // temp = dummy
        
        ListNode *dummy =  new ListNode();
        ListNode *temp = dummy;
        int carry =0;
        // now usinh while to check 
        
        while(l1!=NULL || l2!=NULL ||carry){
        int sum =0;
//             now checking the list 
        
        if(l1 != NULL)
        {
            sum+= l1->val;
            l1 = l1->next;
        }
          if(l2 != NULL)
        {
            sum+= l2->val;
            l2 = l2->next;
        }
        
        sum+=carry;
//             carry sum divied by 10
            carry = sum/10;
//             now checking it
        ListNode *node = new ListNode(sum%10);
        temp->next= node;
        temp =temp->next;
        
    }
    return dummy->next;
}
};
