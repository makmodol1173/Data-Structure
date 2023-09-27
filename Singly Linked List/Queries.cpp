#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node*&head,Node*&tail,int value){
    Node*newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    } 
    else{
        newNode->next=head;
        head=newNode;
    }
}
void insert_at_tail(Node*& head, Node*& tail, int value){
    Node*newNode=new Node(value);
    if (head==NULL){
        head=newNode;
        tail=newNode;
    } 
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
void print_head_tail(Node*&head,Node*&tail){
    if(head!=NULL){
        cout<<head->val<<" "<<tail->val<<endl;
    }
}
int main() 
{
    Node*head=NULL;
    Node*tail=NULL;
    int t;
    cin>>t;
    while (t--) {
        int pos,v;
        cin>>pos>>v;
        if(pos==1){
            insert_at_tail(head, tail, v);
        } 
        else if(pos==0){
            insert_at_head(head, tail, v);
        }
        print_head_tail(head, tail);
    }

    return 0;
}