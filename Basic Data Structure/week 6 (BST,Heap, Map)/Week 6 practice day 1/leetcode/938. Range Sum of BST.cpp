class Solution {
public:
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return 0;
        }
        
        if(low <= root->val && high >= root->val){
            sum += root->val;
        }

        rangeSumBST(root->left,low,high);
        rangeSumBST(root->right,low,high);

        return sum;
    }
};