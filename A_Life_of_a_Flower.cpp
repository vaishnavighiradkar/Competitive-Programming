#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int h=1;
        bool flag=1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        
        for(int i=1;i<=n;i++){
        
            if(a[i]==0&&a[i-1]==0&&i!=1){
               flag=0;
                break;
            }
             else if(a[i]==1&&a[i-1]==1&&i!=1){
                h=h+5;
            }
            else if(a[i]==1&&a[i-1]==0&&i!=1){
                h=h+1;
            }
           else if(a[i]==0&&a[i-1]==1&&i!=1){
                h=h+0;
            }
            else if(a[1]==1){
                h=h+1;
            }
            else if(a[1]==0){
                h=h+0;
            }
            
           
            
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }
        else 
       cout<<h<<endl;

    }
}