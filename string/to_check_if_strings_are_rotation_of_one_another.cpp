#include<bits/stdc++.h>
using namespace std;
int check_rotation(string s1,string s2){
    if(s1.size()!=s2.size())
        {
           return 0; 
        }
        queue<char>q1;
        queue<char>q2;
        int t=s2.size();
   for(int i=0;i<s1.size();i++)
   {
       q1.push(s1[i]);
   }
    for(int i=0;i<s2.size();i++)
   {
       q2.push(s2[i]);
   }
   while(t--)
   {
       char ch=q2.front();
       q2.pop();
       q2.push(ch);
       if(q2==q1){
           return 1;
       }
   }
   
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(check_rotation(s1,s2)==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}