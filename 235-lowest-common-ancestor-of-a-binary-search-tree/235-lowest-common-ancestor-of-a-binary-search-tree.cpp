/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        int a=p->val;
        int b=q->val;
        if(root->val>a && root->val>b){
            return lowestCommonAncestor(root->left,p,q);
        }else if(root->val<a && root->val<b){
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
    
};