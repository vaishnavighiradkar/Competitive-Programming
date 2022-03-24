#include<bits/stdc++.h>
using namespace std;
void print_array(int n,int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void solve(int a[],int n){
int i=0;
    for(int j=0;j<n;j++){
        if(a[j]<0){
            if(i!=j)
             i++;
            swap(a[j],a[i]);
           
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    solve(a,n);
    print_array(n,a);
   
}