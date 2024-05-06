#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertatTail(node* &head, int val){
    node* n=new node(val);
      
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}


//reverse a linkedlist

node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}


//reverse k nodes of a linked list

node* reversek(node* &head, int k){
    node* prevptr=NULL;    
    node* currptr=head;    
    node* nextptr;

    int count=0;
    while (currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }

    if(nextptr){
        head->next = reversek(nextptr,k); 
    }

    return prevptr;    
        
}


void display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertatTail(head,10);    
    insertatTail(head,20);
    insertatTail(head,30);
    insertatTail(head,40);
    insertatTail(head,50);
    insertatTail(head,60);
    display(head);
    // node* newhead = reverseRecursive(head);
    // display(newhead);  
    int k=2;
    node* newhead = reversek(head,k);
    display(newhead);

    return 0;
}