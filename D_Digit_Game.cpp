#include<bits/stdc++.h>
using namespace std;
void solve(int n,string num){
    int count_odd=0,count_even=0;
    if(n%2==0){
        for(int i=1;i<n;i+=2){
            if(num[i]%2==0){
                count_even++;
            }
        }
        if(count_even==0){
            cout<<"1"<<endl;
        }
        else cout<<"2"<<endl;
    }
    else {
         for(int i=0;i<n;i+=2){
            if(num[i]%2!=0){
                count_odd++;
            }
        }
        if(count_odd==0){
            cout<<"2"<<endl;
        }
        else cout<<"1"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string num;
        cin>>num;
        solve(n,num);
    }
}