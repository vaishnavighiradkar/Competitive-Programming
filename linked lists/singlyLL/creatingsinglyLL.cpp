#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
struct node* head=NULL;
void insert_data(int new_data){
    struct node* new_node=new node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
void display_list(){
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    int n,x;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter data for "<<i+1<<"th node: ";
        cin>>x;
        insert_data(x);
    }
    display_list();
}