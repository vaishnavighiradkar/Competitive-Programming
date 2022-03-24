#include<bits/stdc++.h>
using namespace std;
string for_a(string s,string a){
    sort(s.begin(),s.end());
    a=s[0];
   return a;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        string a;
        cin>>s; 
        int k;
        // cout<<s<<endl;
   a= for_a(s,a);
            for(int j=0;j<s.length();j++){
                if(a[0]==s[j]){
                 k=j;
                    break;
                }
            }
        s.erase(s.begin() + k);
        cout<<a<<" "<<s<<endl;
    }
}