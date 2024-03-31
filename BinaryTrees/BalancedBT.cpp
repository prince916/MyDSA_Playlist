#include <bits/stdc++.h>
using namespace std;

int isHeight(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }

    int lh = isHeight(root->left);
    if(lh==-1){
        return -1;
    }
    int rh = isHeight(root->right);
    if(rh==-1){
        return -1;
    }

    if(abs(lh-rh) > 1){
        return -1;
    }

    return (1+max(lh,rh));
}

bool isBalancedBT(TreeNode<int>* root){
    return isHeight (root) != -1;
}


int main()
{
    cout << "THIS is Balanced code your BT" <<endl;
    return 0;
}
