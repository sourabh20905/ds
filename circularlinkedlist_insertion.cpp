#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void insertathead(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    do{
        temp=temp->next;
    }
    while(temp->next!=head);
    temp->next=n;
    n->next=head;
    head=n;
}
void insertattail(node* &head,int val){
    node* n = new node(val);
    node* temp=head;
    if(head==NULL){
                insertathead(head,val);
                return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    
}
void display(node* head)
{
    node* temp=head;
   do
   {
       /* code */
        cout<<temp->data<<" -> ";
        temp=temp->next;
   } while(temp!=head);cout<<endl;
   
   
    
}
int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    display(head);
    insertathead(head,7);
    display(head);
    
}
