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
        map<Node*,Node*>copy;
        Node*ptr=head;
        while(ptr){
            copy[ptr]=new Node(ptr->val);
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr){
            copy[ptr]->next=copy[ptr->next];
            copy[ptr]->random=copy[ptr->random];
            ptr=ptr->next;
        }
        return copy[head];
    }
};