//creting a tree with data 2 3 4
#include<iostream>
using namespace std;
struct node{
int data;
struct node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

int main()
{
    struct node* root=new node(2);
    root->left=new node(3);
    root->right=new node(4);
    root->right->left=new node(7);
}