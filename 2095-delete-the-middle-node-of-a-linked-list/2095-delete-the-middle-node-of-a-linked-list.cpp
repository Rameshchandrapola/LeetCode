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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        ListNode* curr=head;
        int i=1;
        if(n==1){
            return NULL;
        }
        if (n%2==0){
            while(i<n/2){
                curr=curr->next;
                i++;
            }
            curr->next=curr->next->next;
        }
        else{
            while(i<(n-1)/2){
                curr=curr->next;
                i++;
            }
            curr->next=curr->next->next;
        }
        return head;
    }
};