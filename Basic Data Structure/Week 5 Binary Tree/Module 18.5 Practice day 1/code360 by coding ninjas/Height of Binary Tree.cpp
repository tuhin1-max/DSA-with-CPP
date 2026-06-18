int heightOfBinaryTree(TreeNode<int> *root)
{
    if(root == NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }

    int l = heightOfBinaryTree(root->left);
    int r = heightOfBinaryTree(root->right);
    return max(l,r)+1;
}

