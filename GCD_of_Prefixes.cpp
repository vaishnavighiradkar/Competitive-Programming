#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; bool c=false;
        int b[n],a[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(i>0&&b[i-1]%b[i]!=0){
                c=true;
            }
        }
        
        if(c==false){
            for(int i=0;i<n;i++){
                cout<<b[i]<<" ";
            } cout<<endl;
           
        }
        else cout<<"-1"<<endl;

    }
}