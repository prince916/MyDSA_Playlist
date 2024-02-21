#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

struct Info {
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

Info LargestBSTinBT(Node* root){
    if( root == NULL){
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if( root->left==NULL && root->right==NULL){
        return {1,root->data,root->data,1,true};
    }

    Info leftInfo = LargestBSTinBT(root->left);
    Info rightInfo = LargestBSTinBT(root->right);

    Info curr;
    curr.size = (1 + leftInfo.size + rightInfo.size);

    if ( leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data){
        curr.min = min(leftInfo.min, min(rightInfo.min, root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max, root->data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }   

    curr.ans = max(leftInfo.ans,  rightInfo.ans);
    curr.isBST = false;
    return curr;
}


int main()
{
    Node* root = new Node(15);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(5);

    cout << "Largest BST in BT : " << LargestBSTinBT(root).ans <<endl;
    
    // Let's write code for Case-2

    Node* root1 = new Node(22);
    root1->left = new Node(11);
    root1->right = new Node(20);
    root1->left->left = new Node(4);
    root1->left->right = new Node(12);
    root1->left->left->left = new Node(2);
    root1->left->left->right = new Node(6);
    root1->left->right->left = new Node(8);
    root1->left->right->right = new Node(13);
    root1->left->right->right->left = new Node(7);
    root1->left->right->left->right = new Node(10);
    root1->right->left = new Node(19);
    root1->right->right = new Node(26);
    root1->right->left->right = new Node(3);
    root1->right->right->right = new Node(5);

     cout << "Largest BST in BT : " << LargestBSTinBT(root1).ans <<endl;

    return 0;
}