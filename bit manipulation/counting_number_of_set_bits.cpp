#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        int res=n&1;
        n=n>>1;
        if(res!=0){
            count++;
        }
    }
    cout<<count<<endl;
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


//O(logn)