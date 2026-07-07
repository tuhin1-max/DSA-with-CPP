class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool res = true;
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();
    
            if(f->left != NULL) 
            {
                if(f->val != f->left->val){
                    return false;
                }
                q.push(f->left);
            }
            if(f->right != NULL)
            {
                if(f->val != f->right->val){
                    return false;
                }
                q.push(f->right);
            }
            
            
        }

        return true;
    }
};