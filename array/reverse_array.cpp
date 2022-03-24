//Program to reverse an array

#include<bits/stdc++.h>
using namespace std;
char reversearray(char arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    char arr[n];
        cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversearray(arr,n);
}