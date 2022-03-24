#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,x;
    cin>>s>>t>>x;
    if(t>s){
        if((x+0.5)<t&&(x+0.5)>=s){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else if(s>t){
        if((x+0.5)>0&&(x+0.5)<t||(x+0.5)<24&&(x+0.5)>=s){
           
            cout<<"Yes"<<endl;
                   
        }
        else cout<<"No"<<endl;
    }
    
}