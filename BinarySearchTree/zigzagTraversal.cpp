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

void zigzagTraversal(Node* root){

    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool LeftToRight = true;

    currLevel.push(root);

    while (!currLevel.empty())
    {
        Node* temp = currLevel.top();

        currLevel.pop();

        if (temp){
            cout << temp->data << " ";

            if(LeftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }

            // Right to Left

            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }

        if(currLevel.empty()){
            LeftToRight  =  !LeftToRight;
            swap(currLevel,nextLevel);
        }
        
    }
    
}


int main()
{

    Node* root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    //test

    zigzagTraversal(root);
    cout<<endl;


    cout<< "----------Test Case-2------------"<<endl;

    Node* root1 = new Node(16);
    root1->left = new Node(6);
    root1->right = new Node(18);
    root1->left->left = new Node(2);
    root1->left->right = new Node(9);
    root1->left->left->left = new Node(1);
    root1->left->right->left = new Node(3);
    root1->left->right->right = new Node(10);
    root1->right = new Node(18);
    root1->right->left = new Node(17);

    zigzagTraversal(root1);
    cout<<endl;


    return 0;
}