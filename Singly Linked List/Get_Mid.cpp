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
    void print_linked_list(Node *head){  
    for( Node* i=head;i->next!=NULL;i=i->next){
        for(Node*j=i->next;j!=NULL;j=j->next){
            if(i->val<j->val){
                swap(i->val,j->val);    
            }
        }
    }
    Node*tmp=head;
    int c=0;
    while(tmp!=NULL){
        c++;
        tmp=tmp->next;
    }
    int mid=(c+1)/2;
    tmp=head;
    for(int i=0;i<mid-1;i++){
        tmp=tmp->next;
    }
    if(c%2==0){
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else{
        cout<<tmp->val;
    }
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
    print_linked_list(head);
    return 0;
}