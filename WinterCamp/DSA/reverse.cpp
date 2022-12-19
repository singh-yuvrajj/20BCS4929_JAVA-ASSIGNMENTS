#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* createnode(int data){
    node* temp=new node();
    temp->data=data;
    temp->next=NULL;
    return temp;
}
node* inserthead(node* head,int val){
    node* temp= createnode(val);
    temp->next=head;
    head=temp;
    return head;
}
node* instruct(node* head){
    int n,value;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        head= inserthead(head,value);
    }
    return head;
}
void print(node* head){
    cout<<"Elements in linked list are:"<<endl;
    while(head!= NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* itrev(node* head){
    node *pre,*cur,*nxt;
    pre=NULL;
    cur= head;
    while(cur!=NULL){
        nxt = cur->next;
        cur->next = pre;
        pre=cur;
        cur=nxt;
    }
    head=pre;
    return head;
}
node* HEAD=NULL;
void recrev(node* temp){
    if(temp->next==NULL){
        HEAD=temp;
    }
    else{
    recrev(temp->next);
    node* tempo=temp->next;
    tempo->next= temp;
    temp->next=NULL;
}
}
int main()
{
    node* head=NULL;
    int pos;
    head = instruct(head);
    print(head);
    cout<<"After reverse through iteration"<<endl;
    recrev(head);
    print(HEAD);
    return 0;
}