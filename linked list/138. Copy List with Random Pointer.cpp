/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return head;
        unordered_map<Node*, Node*> map;
        Node *curr = head;
        //First Pass: Creating the new nodes and inserting them in the map
        while (curr) {
            map[curr] = new Node(curr->val);
            curr = curr->next;
        }
        curr = head;
        //Second Pass: Setting the next and random pointers for the new nodes
        while (curr) {
            map[curr]->next = map[curr->next];
            map[curr]->random = map[curr->random];
            curr = curr->next;
        }
        return map[head];
    }
};

// The first line checks if the input head is null, and if it is, it returns the head (null) which is the deep copied list.

// The second line declares an unordered_map, which is a data structure that maps the original nodes to the new nodes.

// The third line declares a pointer called "curr" and assigns it to the head of the original list.

// The first while loop starts, iterating through the original list, creating new nodes for each element and inserting them into the map with the original node as the key.

// The second while loop starts, iterating through the original list again, Setting the next and random pointers for each new node based on the corresponding original node in the map.

// The last line returns the new head of the deep copied list, which is the mapped value of the original head.

// This solution has a time complexity of O(n) and a space complexity of O(n) due to the use of the map.
