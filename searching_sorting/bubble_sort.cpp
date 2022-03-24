#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int n,int a[]){
    for(int i=0;i<n-1;i++){
         for(int j=0;j<n-i-1;j++)
        if(a[j+1]<a[j]){
            swap(a[j],a[j+1]);
        }
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
    bubble_sort(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}