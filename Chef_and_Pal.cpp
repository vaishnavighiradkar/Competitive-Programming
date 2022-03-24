#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      string s="";
        if(n%2!=0){
            cout<<"-1"<<endl;
        }
        else {
             for(int i=0;i<n-1;i+=2){
                s+="01";
            }
          cout<<s<<endl;
        }
    }
}