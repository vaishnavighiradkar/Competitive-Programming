#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
     int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1);
}
void quick_sort(int n,int a[],int l,int r){
    if(r>l){
        int pi=partition(a,l,r);
        quick_sort(n,a,l,pi-1);
        quick_sort(n,a,pi+1,r);
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
    quick_sort(n,a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}