
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>final;
        if(root==NULL){
            return final;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool temp=false;
        while(!q.empty()){
            vector<int>level;
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                level.push_back(node->val);
            }
            if(temp)
                reverse(level.begin(),level.end());
            temp=!temp;
            final.push_back(level);
        }
        return final;
    }
};