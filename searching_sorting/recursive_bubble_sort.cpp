#include<bits/stdc++.h>
using namespace std;
void recursive_bubble_sort(int n,int a[]){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            swap(a[i],a[i+1]);
        }
    }
    recursive_bubble_sort(n-1,a);
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
    recursive_bubble_sort(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}