#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    long long int t;
     cin>>t;
     while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int lcm=(n*k)/__gcd(n,k);
        cout<<lcm/k<<endl;
     }
 }