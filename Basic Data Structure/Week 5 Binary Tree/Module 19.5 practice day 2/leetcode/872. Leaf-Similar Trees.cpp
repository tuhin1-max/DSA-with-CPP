class Solution {
    vector<int>v1;
    vector<int>v2;

public:
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        if(root1 == NULL && root2 == NULL){
            return v1==v2;
        }
       
        if(root1!=NULL){
            if(root1->left == NULL && root1->right == NULL){
                v1.push_back(root1->val);         
            }
            leafSimilar(root1->left,NULL);
            leafSimilar(root1->right,NULL);
        }
        
        if(root2!=NULL){
            if(root2->left == NULL && root2->right == NULL){
                v2.push_back(root2->val);
            }
            leafSimilar(NULL,root2->left);
            leafSimilar(NULL,root2->right);
        }
        

        return v1==v2;
    }
};