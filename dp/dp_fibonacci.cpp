#include<bits/stdc++.h>
using namespace std;
const int N=10e5+10;
int dp[N];
int fibonacci(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    else return dp[n]=fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
}