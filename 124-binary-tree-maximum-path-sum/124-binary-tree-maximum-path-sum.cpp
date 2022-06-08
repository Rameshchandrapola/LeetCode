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
    int maxi=INT_MIN;
    int gain(TreeNode* root){
        int current_path=0;
        if(root==NULL){
            return 0;
        }
        int left_gain=max(gain(root->left),0);
        int right_gain=max(gain(root->right),0);
        current_path = root->val + left_gain + right_gain;
        maxi= max(maxi,current_path);
        return root->val + max(left_gain,right_gain);
    }
    
    int maxPathSum(TreeNode* root) {
        gain(root);
        return maxi;
    }
};