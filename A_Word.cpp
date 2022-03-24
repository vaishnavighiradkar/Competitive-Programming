#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
ll mod=1000000007;
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
void solve(){
    string s;
    cin>>s;
    int upper=0,lower=0;
    fl(i,s.size())
    {
        if(s[i] >= 65 and s[i] <=90) upper++;
        else lower++;
    }
    if(upper>lower){
        fl(i,s.size()){
           s[i]= toupper(s[i]);
            cout<<s[i];
        }
         
    }
    else if(lower>=upper){
        fl(i,s.size()){
           s[i]= tolower(s[i]);
            cout<<s[i];
        } 
    }
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    solve();
    
return 0;
}