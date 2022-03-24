#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        if((a1+a3)==2*a2){
            cout<<"0"<<endl;
        }
        else if((a1+a2-2*a3)%3==0){
            cout<<"0"<<endl;
        }
        else if((a3+a1-2*a2)%3==0){
            cout<<"0"<<endl;
        }
        else if((a3+a2-2*a1)%3==0){
            cout<<"0"<<endl;
        }
        else cout<<"1"<<endl;

    }
}