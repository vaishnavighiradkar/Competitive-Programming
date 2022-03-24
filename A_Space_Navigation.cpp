#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    int l=0,r=0,u=0,d=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L') l++;
        else if(s[i]=='R') r++;
        else if(s[i]=='U') u++;
        else if(s[i]=='D') d++;
    }
    int x1=abs(x);
    int y1=abs(y);
    if(x>0&&y>0){
        if(r>=x1&&u>=y1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(x<0&&y<0){
        if(l>=x1&&d>=y1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(x<0&&y>0){
        if(l>=x1&&u>=y1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(x>0&&y<0){
        if(r>=x1&&d>=y1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(x==0&&y<0){
        if(d>=y1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(x==0&&y>0){
        if(u>=y1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(y==0&&x<0){
        if(l>=x1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(y==0&&x>0){
        if(r>=x1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
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