#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        bool flag=true;
       string a[n-2];
       string s="";
       for(int i=0;i<n-2;i++)
       {
           cin>>a[i];
           if(i==0){
               s+=a[i];
               continue;
           }
           else {
               if(a[i][0]==a[i-1][1]){
                   s+=a[i][1];
               }
               else {
                   s+=a[i];
                   flag=false;
               }
           }
       }
       if(flag){
           s+="a";
       }
       cout<<s<<endl;
    }
}