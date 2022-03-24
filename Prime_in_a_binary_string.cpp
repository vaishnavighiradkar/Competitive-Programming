#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s; bool flag=false;
    vector<string>v;
    
    for(int i=0;i<s.size();i++){        
            if((s[i]=='1'&&s[i+1]=='0')||(s[i]=='1'&&s[i+1]=='1')){
            flag=true;
                break;
            }
    }
    if(flag==true){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}