#include<bits/stdc++.h>
using namespace std;
int do_intersection(int a[],int b[],int n,int m){
    int count=0;
   for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
      if(a[i]==b[j]){
          count++;
      }
  }
   }
   return count;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<do_intersection(a,b,n,m)<<endl;
}