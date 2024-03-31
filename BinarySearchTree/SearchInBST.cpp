#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL; 
    }
};


Node* searchInBST(Node* root, int key){
    if( root == NULL ){
        return NULL;
    }
    if( root->data == key){
        return root;
    }
    else if (root->data > key)
    {
        return searchInBST(root->left, key);
    }
    else{
        return searchInBST(root->right,key);
    }
    
}

Node* inorderSucc(Node* root){
    Node* curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}


Node* deleteInBST(Node* root, int key){
    if(key < root->data){
        root->left = deleteInBST( root->left, key);
    }
    else if( key > root->data ){
        root->right = deleteInBST( root->right, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right; 
            free(root);
            return temp;
        }
        if(root->right == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }

        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right,temp->data);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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



    // if( searchInBST(root, 2) == NULL){
    //     cout<<"key doesn't exist";
    // }
    // else{
    //     cout<<"key exists";
    // }
    // cout<<endl;


    inorder(root);
    cout << endl;
    root = deleteInBST(root, 6);
    inorder(root);
    cout << endl;

    return 0;
}