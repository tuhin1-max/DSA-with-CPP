// This problem solve two way 

// 1st way...
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    int temp = 0;
    while(!q.empty()){
        BinaryTreeNode<int>* p = q.front();
        q.pop();
        
        if(p->data == x){
            temp = 1;
            return true;
            break;
        }

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }

    if(temp==0){
        return false;
    }

}

// 2nd way
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL){
        return false;
    }

    if(root->data == x){
        return true;
    }

    bool l = isNodePresent(root->left,x);
    bool r = isNodePresent(root->right,x);
    return (l || r);
}