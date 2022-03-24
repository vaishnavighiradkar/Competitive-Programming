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
        int a[n],b[n];
         int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
           b[i] =a[i]%3;
        }
        // for(int i=0;i<n;i++){
        //     cout<<b[i]<<" ";
        // }cout<<endl;
        for(int i=0;i<n;i++){
            if(b[i]==0){
                cnt0++;
            }
           else if(b[i]==1){
                cnt1++;
            }
           else if(b[i]==2){
                cnt2++;
            }
        }
        if(cnt0==n){
            cout<<"0"<<endl;
        }
        else if(cnt1==cnt2){
            cout<<cnt1<<endl;
        }
        else if(cnt2>cnt1){
            if((cnt2-cnt1)%3==0){
                cout<<cnt1+2*((cnt2-cnt1)/3)<<endl;
            }
            else {
                cout<<"-1"<<endl;
            }
        }
        else if(cnt1>cnt2){
            if((cnt1-cnt2)%3==0){
                cout<<cnt2+2*((cnt1-cnt2)/3)<<endl;
            }
            else {
                cout<<"-1"<<endl;
            }
        }
        else cout<<"-1"<<endl;
        
        
    }
}