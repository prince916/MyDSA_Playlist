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

Node* arrayToBST(int arr[], int start, int end){
    
    if( start > end) {
        return NULL;
    }

    int mid = (start + end) / 2 ;
    Node* root = new Node(arr[mid]);

    root->left = arrayToBST(arr, start, mid-1);
    root->right = arrayToBST(arr, mid+1, end);

    return root;
}

void preorderPrint(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main()
{
    int arr[] = {10,20,30,40,50};

    Node* root = arrayToBST(arr, 0 , 4);
    preorderPrint(root);
    cout<<endl;

    int arr1[] = {20,40,60,80,100};

    Node* root1 = arrayToBST(arr1, 0 , 4);
    preorderPrint(root1);
    cout<<endl;

    int arr2[] = {1,2,3,4,5,6,7,8,9,10};

    Node* root2 = arrayToBST(arr2, 0 , 4);
    preorderPrint(root2);
    cout<<endl;
    return 0;
}