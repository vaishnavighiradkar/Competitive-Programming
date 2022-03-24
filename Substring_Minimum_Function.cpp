#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k=n-m*3;
        int t=n-m;
        int ans=m*3+(k*(k+1))/2;
        if(m>=t){
            cout<<t<<endl;
        }
        
       
        else if(m<t){
            if(t!=2){
             cout<<ans<<endl;
            }
            else {
                cout<<t<<endl;
            }
            

        }
        
    }
}