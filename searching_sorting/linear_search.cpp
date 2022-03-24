#include<bits/stdc++.h>
using namespace std;
int linear_search(int n,int a[],int x){
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            flag=true;
            return i;
        }
    }
    if(flag==false){
        return -1;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the values of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter the value to be found : ";
    cin>>x;
    cout<<"Element is at index "<<linear_search(n,a,x);
}