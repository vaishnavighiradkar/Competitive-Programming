#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n,int a[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap(a[i],a[j]);
            }
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
    selection_sort(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}