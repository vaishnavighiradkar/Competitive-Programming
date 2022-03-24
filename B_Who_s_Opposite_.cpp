#include<bits/stdc++.h>
using namespace std;
void solve(){
   int a,b,c;
   int n,d;  //number of people
   cin>>a>>b>>c;
   n=(abs(a-b)-1)*2+2;
   if(n<=2||c>n||abs(a-b)<min(a,b)){
       cout<<"-1"<<endl;
   }
   else {
     if(c<=n/2){
       d=c+n/2;
       
   cout<<d<<endl;
   }
   else if(c>n/2){
       d=c-n/2;
       cout<<d<<endl;
   }
   }
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}