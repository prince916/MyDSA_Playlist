
// Recursion Method

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node * newNode(int data){
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return (node);
}

void postOrderTraversal(node *currElement,vector <int> &postOrder){
    if(currElement == NULL){
        return;
    }

    postOrderTraversal(currElement -> left, postOrder);
    postOrderTraversal(currElement -> right, postOrder);
    postOrder.push_back(currElement -> data);
}


int main()
{
    struct node *root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> left -> right -> left = newNode(8);
    root -> right -> left = newNode(6);
    root -> right -> right = newNode(7);
    root -> right -> right -> left = newNode(9);
    root -> right -> right -> right = newNode(10);

    vector <int> postOrder;
    postOrderTraversal(root, postOrder);

    cout << "The Postorder Traversal is : ";
    for (int i = 0; i < postOrder.size(); i++)
    {
        cout << postOrder[i] << " ";
    }
    return 0;
}