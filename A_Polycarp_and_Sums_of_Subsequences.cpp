#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=7;
       long long int b[7];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        cout<<b[0]<<" "<<b[1]<<" ";
        for(int i=2;i<=6;i++){
            if(b[i]+b[0]+b[1]==b[6]){
                cout<<b[i]<<" ";
                break;
            }
        }
        cout<<endl;
    }
}