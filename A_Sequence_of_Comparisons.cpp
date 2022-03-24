#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='>'){
            cnt1++;
        }
        else if(s[i]=='<') cnt2++;
        else cnt3++;
    }
    if(cnt1>0&&cnt3>0&&cnt2==0){
        cout<<">"<<endl;
    }
    else if(cnt2>0&&cnt3>0&&cnt1==0){
        cout<<"<"<<endl;
    }
    else if(cnt2>0&&cnt1>0&&cnt3==0){
        cout<<"?"<<endl;
    }
    else if(cnt2>0&&cnt1>0&&cnt3>0){
        cout<<"?"<<endl;
    }
    else if(cnt2==0&&cnt1==0&&cnt3>0){
        cout<<"="<<endl;
    }
    else if(cnt3==0&&cnt1==0&&cnt2>0){
        cout<<"<"<<endl;
    }
    else if(cnt3==0&&cnt2==0&&cnt1>0){
        cout<<">"<<endl;
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