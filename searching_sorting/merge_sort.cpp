#include<bits/stdc++.h>
using namespace std;
void merge(int n,int a[],int l,int r,int mid){
    int n1=mid-l+1;
    int n2=r-mid;
    int c[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        c[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=a[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(c[i]<b[j]){
            a[k]=c[i];
           i++;
        }
        else{ 
        a[k]=b[j];
        j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=c[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=b[j];
        j++;
        k++;
    }
}
void merge_sort(int n,int a[],int l,int r){
    if(r>l){
        int mid;
        mid=l+(r-l)/2;
        // merge_sort(n,a,l,r);
        merge_sort(n,a,l,mid);
        merge_sort(n,a,mid+1,r);
        merge(n,a,l,r,mid);
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
    merge_sort(n,a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}