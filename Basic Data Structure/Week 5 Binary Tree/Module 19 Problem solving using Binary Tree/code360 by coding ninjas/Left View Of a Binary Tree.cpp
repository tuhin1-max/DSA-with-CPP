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

// 2nd way

#include <bits/stdc++.h> 

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    bool fre[3005] = {false};
    queue<pair<TreeNode<int>*,int>> q;
    if(root){
        q.push({root,1});
    }

    while(!q.empty()){
        pair<TreeNode<int>*,int> parent = q.front();
        q.pop();

        TreeNode<int>* node = parent.first;
        int level = parent.second;
        
        if(fre[level]==false){
            ans.push_back(node->data);
            fre[level] = true;
        }

        if(node->left){
            q.push({node->left,level+1});
        } 
        if(node->right){
            q.push({node->right,level+1});
        }
    }

    return ans;
}