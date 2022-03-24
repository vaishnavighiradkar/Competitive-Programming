#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int n,int a[]){
    for(int i=1;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(a[j]>current&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
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
    insertion_sort(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}