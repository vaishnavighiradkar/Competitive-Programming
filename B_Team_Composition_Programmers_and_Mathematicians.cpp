#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        int min_team=(a+b)/4;
        int smll=min(a,b);
        if((a+b)<4){
            cout<<"0"<<endl;
        }
        else{
            cout<<min(min_team,smll)<<endl;
        }
    }
}