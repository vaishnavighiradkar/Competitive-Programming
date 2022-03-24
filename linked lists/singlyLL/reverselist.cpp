#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
void reverse_list(struct node** head){
    node* prev=NULL;
    node* current=*head;
    node* temp;
    while(current!=NULL){
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    *head=prev;

}
void insert(int new_data){
    struct node* temp=new node;
    temp->data=new_data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else {
        tail->next=temp;
        tail=tail->next;
    }

}
void display(struct node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cout<<"Enter the data: ";
        cin>>x;
        insert(x);
    }
       
    cout<<"The list is: ";
    display(head);
    cout<<endl;
    reverse_list(&head);
    cout<<"The reversed list is: ";
    display(head);
    cout<<endl;

 
}