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
    vector<int>result;
    void solve(TreeNode*root){
        if(root==NULL){
            return;
        }
        solve(root->left);
        result.push_back(root->val);
        solve(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        solve(root);
        TreeNode* ans = new  TreeNode();
        ans->val=result[0];
        TreeNode* temp=ans;
        for(int i=1;i<result.size();i++){
            temp->right=new TreeNode();
            temp=temp->right;
            temp->val=result[i];
        }
        return ans;
    }
};