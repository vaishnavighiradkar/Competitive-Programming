#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='B'){
            b++;
        }
        else {
            c++;
        }
    }
    // cout<<a<<" "<<b<<" "<<c<<endl;
    if(b==(a+c)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}