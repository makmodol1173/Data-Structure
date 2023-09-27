#include<bits/stdc++.h>
using namespace std;
 class Node
    {
        public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
    };
    void insert_at_tail(Node*&head,Node *&tail,int value){
        Node*newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            tail=newNode;
           return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    void reverse(Node*t){
        if(t==NULL){
            return;
        }
        reverse(t->next);
        cout<<t->val<<" ";
    }
    void print(Node*head){
        Node*tmp=head;
        while(tmp!=NULL){
            cout<<tmp->val<<" ";
            tmp=tmp->next;
        }
        cout<<endl;
    }
int main()
{
Node*head=NULL;
Node*tail=NULL;
int v;
while(true){
    cin>>v;
    if(v==-1){
        break;
    }
    insert_at_tail(head,tail,v);
}
    reverse(head);
    cout<<endl;
    print(head);
}