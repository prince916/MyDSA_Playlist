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

Node* SearchInBT(Node *root, int key){
    if( root == NULL ){
        return NULL;
    }

    if( root->data == key ){
        return root;
    }
    else if( root->data > key){
        return SearchInBT( root->left,key);
    }
    else{
        return SearchInBT( root->right,key);
    }
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



    if( SearchInBT(root,9) == NULL){
        cout << "The key does not exits" <<endl;
    }
    else{
        cout << "key exits" << endl;
    }
    cout << endl;

    return 0;
}