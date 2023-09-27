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
    void print(Node*head, Node*head1){
        Node*tmp=head;
        int c1=0;
        while(tmp!=NULL){
            c1++;
            tmp=tmp->next;
        }
        Node*tmp1=head1;
        int c2=0;
        while(tmp1!=NULL){
            c2++;
            tmp1=tmp1->next;
        }
        if(c1!=c2){
            cout<<"NO"<<endl;
        }
        else if(c1==c2){
        bool a=true;
        for(Node*i=head,*j=head1;i!=NULL,j!=NULL;i=i->next,j=j->next){
            if(i->val!=j->val){
               a=false;
            }
        }
        if(a==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }  
    }
    
int main()
{
Node*head=NULL;
Node*tail=NULL;
Node*head1=NULL;
Node*tail1=NULL;
int v;
while(true){
    cin>>v;
    if(v==-1){
        break;
    }
    insert_at_tail(head,tail,v);
}
while(true){
        cin>>v;
        if (v==-1){
           break; 
        }
        insert_at_tail(head1,tail1,v);
    }
    print(head,head1);
}