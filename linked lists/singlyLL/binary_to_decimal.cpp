#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
void insert_data(int n){
 
    node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
}
void display_list(){
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int binary_to_decimal(node* head){
int sum=0;
node* ptr=head;
while(ptr!=NULL){
    sum*=2;
    sum=sum+ptr->data;
    ptr=ptr->next;
}
return sum;

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
    cout<<endl;
   cout<<"Decimal result is: "<<binary_to_decimal(head);
}