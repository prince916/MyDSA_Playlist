#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    if ( root == NULL)
    {
        return true;
    }

    if( min != NULL &&   root->data  <=   min->data ){
        return false;
    }

    if( max != NULL &&   root->data >= max->data){
        return false;
    }
    
    bool LeftValid = isBST(root->left,min,root);
    bool rightValid = isBST(root->right,root,max);
    return LeftValid and rightValid;
}

int main()
{
    Node* root1 = new Node(5);
    root1->left = new Node(2);
    root1->right = new Node(8);
    root1->left->left = new Node(1);
    root1->right->left = new Node(9);


    if(isBST(root1,NULL,NULL)){
        cout<<"valid BST"<<endl;
    }
    else{
        cout<<"invalid BST"<<endl;
    }

    Node* root2  = new Node(9);
    root1->left = new Node(3);
    root1->right = new Node(7);
    root1->left->left = new Node(1);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->left = new Node(8);
    root1->right->left->right = new Node(11);

    if(isBST(root2,NULL,NULL)){
        cout<<"valid BST"<<endl;
    }
    else{
        cout<<"invalid BST"<<endl;
    }

    return 0;
}