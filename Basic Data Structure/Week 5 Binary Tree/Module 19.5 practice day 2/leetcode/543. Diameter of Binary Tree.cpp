class Solution {
public:
    int mx;
    int height_tree(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return 1;
        }

        int l = height_tree(root->left);
        int r = height_tree(root->right);
        int d = l+r;
        mx = max(d,mx);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        mx = 0;
        int h = height_tree(root);
        return mx;
    }
};