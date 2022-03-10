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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode tem(0);
        ListNode*temp=&tem;
        int sum=0;
        while(sum||l1||l2){
            sum+=(l1?l1->val:0)+(l2?l2->val:0);
            temp->next= new ListNode(sum%10);
            temp=temp->next;
            sum=sum/10;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        return tem.next;
    }
};