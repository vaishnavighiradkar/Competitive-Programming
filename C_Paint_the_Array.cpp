#include<bits/stdc++.h>
using namespace std;
#define ull  long long int  
void sol(){

        int n;
        cin>>n;
        ull a[n];
         bool ok=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        ull g1=0,g2=0; 
         for(int i=0;i<n;i+=2){
                g1=__gcd(g1,a[i]);            
        }
        for(int i=1;i<n;i+=2){
                g2=__gcd(g2,a[i]);            
        }
        for(int i=0;i<n;i+=2){
                if(a[i]%g2==0){
                    ok=false;
                    break;
                }            
        }
        if(ok){
            cout<<g2<<endl;
            return;
        }
      ok=true;
         for(int i=1;i<n;i+=2){
                if(a[i]%g1==0){
                    ok=false;
                    break;
                }            
        }
        if(ok){
            cout<<g1<<endl;
            return;
        }
   cout<<"0"<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
       sol();
   }
}