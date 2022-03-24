#include<bits/stdc++.h>
using namespace std;
void solve(int n,string s){
    string s1="",s2="",s_res="";
    string small;
    int result;
    for(int i=0;i<n;i++){
        small=s.substr(0,0)+s.substr(0,0);
        s1=s.substr(0,i);
        s2=s.substr(0,i);
        reverse(s2.begin(),s2.end());
        s_res=s1+s2;
        result=s_res.compare(small);
        if(result<=0){
            small=s_res;
        }
    }
            cout<<small<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(n,s);
    }
}