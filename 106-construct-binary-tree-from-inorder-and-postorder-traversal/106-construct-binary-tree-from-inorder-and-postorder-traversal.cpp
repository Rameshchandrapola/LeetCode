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
    TreeNode* fns(vector<int>& in,int x, int y, vector<int>&po, int a, int b){
        if(x>y||a>b){
            return NULL;
        }
        int temp=x;
        TreeNode* node=new TreeNode(po[b]);
        while(node->val!=in[temp])temp++;
        node->left=fns(in,x,temp-1,po,a,a+temp-x-1);
        node->right=fns(in,temp+1,y,po,a+temp-x,b-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return fns(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
};