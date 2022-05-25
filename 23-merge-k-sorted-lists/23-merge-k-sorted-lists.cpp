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
    ListNode* mergesort(ListNode* x, ListNode*y){
        if(!x)
            return y;
        if(!y)
            return x;
        ListNode* result=new ListNode(-1);
        ListNode* temp=result;
        while(x&&y){
            if(x->val<y->val){
                temp->next=x;
                x=x->next;
            }else{
                temp->next=y;
                y=y->next;
            }
            temp=temp->next;
        }
        if(x){
            temp->next=x;
        }
        if(y){
            temp->next=y;
        }
        return result->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     ListNode* result=NULL;
        for(auto &list:lists){
            result=mergesort(result,list);
        }
        return result;
    }
};