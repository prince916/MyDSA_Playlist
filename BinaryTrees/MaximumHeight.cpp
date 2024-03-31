#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node (int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int MaxDepth(Node* root){
    if(root == NULL){
        return 0;
    }

    int lh = MaxDepth(root->left);
    int rh = MaxDepth(root->right);

    return (1 + max(lh, rh));
}

int main()
{
    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(8);
    root->right->right->left = new Node(12);


    cout << "Maximum height of this tree is : " << MaxDepth(root);

    return 0;
}