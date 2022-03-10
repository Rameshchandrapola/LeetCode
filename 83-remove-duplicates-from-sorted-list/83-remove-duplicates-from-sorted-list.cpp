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
    ListNode* deleteDuplicates(ListNode* head) {
                if(head==NULL)return head;
        ListNode *left=head,*right=head->next;
        int num=head->val;
        while(right){
            if(num!=right->val){
                left->next=right;
                num=right->val;
                left=right;
            }
            right=right->next;
        }
        left->next=NULL;
        return head;
}
};