#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       long long int ans,M=10e9+7;
        if(n==1){
            cout<<"1"<<endl;
        }
        else {
            ans=(n) % M+1;
            cout<<ans<<endl;
        }
    }
}