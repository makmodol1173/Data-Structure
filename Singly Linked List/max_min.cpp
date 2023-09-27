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
 void insert_at_tail(Node *&head,Node*&tail,int value){
    Node*newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode; 
 }
 void print_linked_list(Node*head){
    Node*tmp=head;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
    }
   int max=INT_MIN;int min=INT_MAX;
   for(Node*j=head;j!=NULL;j=j->next)
   {
    if(j->val>max){
        max=j->val;
    }
    if(j->val<min){
        min=j->val;
    }
   }
   cout<<max<<" "<<min;
 }
int main()
{
Node*head=NULL;
Node*tail=NULL;
int v;
while(true){
    cin>>v;
    if(v==-1)
    {
        break;
    }
    insert_at_tail(head,tail,v);
}
print_linked_list(head);
    
    return 0;
}
