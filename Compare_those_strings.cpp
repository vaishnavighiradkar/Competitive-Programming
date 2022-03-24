#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n;
        cin>>n;
        bool flag;
        string a,b;
        cin>>a>>b;
       long long int count=0;
        for(long long int i=0;i<n;i++){
            flag=lexicographical_compare(a.begin()+i,a.end(),b.begin()+i,b.end());
            if(flag==true){
                count++;
            }
        }
        cout<<count<<endl;
    }
}