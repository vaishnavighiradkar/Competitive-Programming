#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s,t;
    cin>>s>>t;
    int cnta=0,cntb=0,cntc=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a') cnta++;
        else if(s[i]=='b') cntb++;
        else if(s[i]=='c') cntc++;
    }
     sort(s.begin(),s.end());
    if(t!="abc"||cnta==0||cntb==0||cntc==0){       
        cout<<s<<endl;
    }
    else {
        for(int i=0;i<cnta;i++){
            cout<<"a";
        }
        for(int i=0;i<cntc;i++){
            cout<<"c";
        }
        for(int i=0;i<cntb;i++){
            cout<<"b";
        }
        s.erase(remove(s.begin(), s.end(), 'a'), s.end());
        s.erase(remove(s.begin(), s.end(), 'b'), s.end());
        s.erase(remove(s.begin(), s.end(), 'c'), s.end()); 
        cout<<s<<endl;
         


    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}