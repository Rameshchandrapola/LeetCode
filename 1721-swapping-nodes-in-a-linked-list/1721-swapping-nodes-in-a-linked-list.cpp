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
    ListNode* swapNodes(ListNode* head, int k) {
        int temp;
        ListNode* current=head;
        ListNode* right=head;
        ListNode* left=head;
        int itr=1;
        while(current!=NULL){
            if(itr<k){
                left=left->next;
            }else if(itr>k){
                right=right->next;
            }
            itr++;
            current=current->next;
        }
        temp=left->val;
        left->val=right->val;
        right->val=temp;
        return head;
    }
};