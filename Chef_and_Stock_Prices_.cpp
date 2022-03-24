#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--){
        float s,a,b,c;
         cin>>s>>a>>b>>c;
         float k=s*c/100;
         float sf=s + k;
         if(sf>=a&&sf<=b){
             cout<<"Yes"<<endl;
         }
         else cout<<"No"<<endl;
     }
 }