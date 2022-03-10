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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return head;
        ListNode*p=head;
        int length=1;
        while(p->next){
            length++;
            p=p->next;
        }
        p->next=head;
        k=k%length;
        for(int i=0;i<length-k;i++){
            p=p->next;
        }
        ListNode* Newhead=p->next;
                        p->next=NULL;

        return Newhead;
    }
};