#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n,int l,int r){
    swap(a[l],a[r]);
    reverse( a, n, l+1,r-1);
    if(l>=r) return;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,n,0,n-1);
}