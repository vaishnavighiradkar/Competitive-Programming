#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll digit_sum(ll n){
    ll sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
void solve(){
    ll n;
    cin>>n;
//    cout<<__gcd(517651839509477601,digit_sum(517651839509477601))<<endl;  //expected 3
//       cout<<__gcd(517651839509477600,digit_sum(517651839509477600))<<endl;  //answered 1

    ll a[3];
    for(ll i=0;i<3;i++){
    ll k;
    k=digit_sum(n+i);
        a[i]=__gcd(n+i,k);
        if(a[i]>1){
            cout<<n+i<<endl;
            break;
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}