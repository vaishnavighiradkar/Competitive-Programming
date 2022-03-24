#include<iostream>
#define MAX_SIZE 6
using namespace std;
int stack[MAX_SIZE];
int top=-1;
void push(int data){
    if(top==MAX_SIZE-1){
        cout<<"Stack Overflow"<<endl;
    }
    top++;
    stack[top]=data;
}
void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }
    int val;
    val=stack[top];
    top--;
}
void print_stack(){
    for(int i=0;i<top;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int isEmpty(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
        return 1;
    }
    else {
        return 0;
    }
    cout<<endl;
}
int isFull(){
    if(top==MAX_SIZE-1){
        cout<<"Stack is full"<<endl;
        return 1;
    }
    else {
        return 0;
    }
    cout<<endl;
}
int peek(){
    return stack[top];
}
int main()
{
push(6);
push(3);
push(9);
push(7);
push(4);
push(5);
print_stack();
print_stack();
int x=isEmpty();
cout<<x<<endl;
int y=isFull();
 cout<<y<<endl;
 cout<<"Top element is: "<<endl;
int k=peek();
cout<<k;
}
