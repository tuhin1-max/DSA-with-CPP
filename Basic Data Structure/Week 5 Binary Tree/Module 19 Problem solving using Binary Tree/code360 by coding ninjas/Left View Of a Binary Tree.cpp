// This problem solve two way 

// 1st way...
#include <bits/stdc++.h> 

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> v;
    queue<TreeNode<int>*> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        int size = q.size();
        TreeNode<int>* node;

        for(int i=0;i<size;i++){
            node = q.front();
            q.pop();

            if(i==0){
                v.push_back(node->data);
            }
            if(node->left){
            q.push(node->left);
            }  
            if(node->right){
                q.push(node->right);
            }
        }

    }

    return v;
}