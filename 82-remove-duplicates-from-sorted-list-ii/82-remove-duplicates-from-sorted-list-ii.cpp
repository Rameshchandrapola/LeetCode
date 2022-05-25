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
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        int duplicate;
        ListNode* current=dummy;
        while( current->next!=NULL){
            if( current->next->next&&current->next->val==current->next->next->val){
                duplicate=current->next->val;
                while(current->next&& current->next->val==duplicate){
                    current->next=current->next->next;
                }
            }else{
                current=current->next;
            }
        }
        return dummy->next;
    }
};