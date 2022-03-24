#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool issquare(ll n){
    ll x; 
    if(ceil(sqrt(n))==floor(sqrt(n))){
        return true;
    }
    else return false;
}
void solve(){
    ll k;
    cin>>k;
    ll row,column;
    ll m=ceil(sqrt(k));
    ll r1=abs(m*m-k);
    if(issquare(k)==true){
        row=sqrt(k);
        column=1;
    }
    else {
        if(r1<m){
            row=m;
            column=r1+1;
        }
        else {
            column=m;
            row=abs(m-((m*m-m+1)-k));
        }
    }
            cout<<row<<" "<<column<<endl;

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