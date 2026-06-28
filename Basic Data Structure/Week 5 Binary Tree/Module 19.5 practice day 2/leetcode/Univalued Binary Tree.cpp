class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(!root){
            return true;
        }

        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();
            
            if(f->val != root->val){
                return false;
            }

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
        
        return true;
    }
};