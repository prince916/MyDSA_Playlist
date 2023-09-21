#include <bits/stdc++.h>

vector<int> bottomView(TreeNode<int> * root){
    // Write your code here.
     vector<int>answer;
        if(root==NULL){
            return answer;
        }
        map<int,int>topNode;
        queue<pair<TreeNode<int>*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<TreeNode<int>*,int> temp=q.front();
            q.pop();
            TreeNode<int>* frontNode=temp.first;
            int hd=temp.second;
            topNode[hd]=frontNode->data;
            if(frontNode->left){

                q.push(make_pair(frontNode->left,hd-1));

            }

            if(frontNode->right){

                q.push(make_pair(frontNode->right,hd+1));

            }

        }

        for(auto i:topNode){

                answer.push_back(i.second);

            }

        return answer;

}