#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}; 
struct node* head=NULL;

void insert(int new_data){
    node* ptr=new node;
    ptr->data=new_data;
    ptr->next=head;
    head=ptr;

}
void display(){
   struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int middlenode(struct node* head){
    node* slow_ptr=head;
    node* fast_ptr=head;
    while(fast_ptr!=NULL&&fast_ptr->next!=NULL){
        fast_ptr=fast_ptr->next->next;
        slow_ptr=slow_ptr->next;
    }
    return slow_ptr->data;
}
int main()
{
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>x;
        insert(x);
    }
    display();
    cout<<endl;
    cout<<"Middle node is: ";
   cout<< middlenode(head);
}