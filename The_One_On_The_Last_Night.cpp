#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    int ans;
    while(t--)
    { 
        string n;
       int k;
       cin>>n>>k;
       sort(n.begin(),n.end());
       ll st = 1;
    while(k>=1&&n[0]!='9') {
        for(int i=0;i<n.size();i++) {
            if(k<1)
            break;
            if(n[i]=='9')
            break;
            while(n[i]<(st+'0')&&k>=1) {
                n[i] = n[i] + 1;
                k-=1;
            }
        }
        st++;
    }
    ll ans = 1;
    for(int i=0;i<n.size();i++) {
        ans*=(n[i]-'0');
    }
    cout<<ans<<endl;
    }

    
}