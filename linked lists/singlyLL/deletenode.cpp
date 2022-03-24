#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
void insert(int n){
    struct node* ptr=new node;
    ptr->data=n;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
        tail=ptr;
    }
    else {
        tail->next=ptr;
        tail=tail->next;
    }
}
void display(){
    struct node*ptr=head;
    while(head!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void deletenode(int val){
struct node* ptr=head;
struct node* temp;
while(ptr->next!=NULL){
    if(ptr->next->data==val){
        temp=ptr->next;
ptr->next=ptr->next->next;
    }
    else ptr=ptr->next;
}
}
int main(){
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>x;
        insert(x);
    }
    cout<<"The list is: ";
    display();
    cout<<endl;
    int val;
    cout<<"Enter which node is to be deleted: ";
    cin>>val;
    deletenode(val);
    display();
}