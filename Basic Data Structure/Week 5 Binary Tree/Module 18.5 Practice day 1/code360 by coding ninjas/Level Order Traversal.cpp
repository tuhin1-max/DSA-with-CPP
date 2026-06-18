vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> v;
    if(root == NULL){
        return v;
    }
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    
    while(!q.empty()){
        BinaryTreeNode<int>* f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }

    return v;
}