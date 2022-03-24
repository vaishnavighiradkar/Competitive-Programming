#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s,to_print;
        cin>>s>>to_print;
        int a[26]={0};
     for (int i = 1; i <=26; i++)
     {
         a[(int)s[i]-'a']=i;
     }
     int k=to_print.length();

        int sum=0;
        for(int i=0;i<k-1;i++){
            sum+=abs(a[to_print[i+1]-'a']-a[to_print[i]-'a']);
        }
        cout<<sum<<endl;
    }
}