/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        stack<TreeNode*>s;
        while(root||!s.empty()){
            if(root->right){
                s.push(root->right);
            }
            if(root->left){
                root->right=root->left;
                root->left=NULL;
            }else if(!s.empty()){
                TreeNode* node=s.top();s.pop();
                root->right=node;
            }
            root=root->right;
        }
    }
};