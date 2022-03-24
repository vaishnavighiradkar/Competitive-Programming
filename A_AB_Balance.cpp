#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--){
         int cnt_ab=0;
         int cnt_ba=0;
         string s;
         cin>>s;
        
             if(s[0]==s[s.length()-1]){
                 cout<<s<<endl;
             }
             else {s[0]=s[s.length()-1];
             cout<<s<<endl;}
         }
        //  cout<<cnt_ab<<" "<<cnt_ba<<endl;
         
     
 }