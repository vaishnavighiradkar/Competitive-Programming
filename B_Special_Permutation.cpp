#include <bits/stdc++.h>
using namespace std;

void solve(int n,int a,int b){


     if(a<b)
     {
         int l=n-a-1;
         int r=b-2;
         int x=(n/2)-1;
         if(l<x || r<x) cout<<-1<<endl;
         else
         {
             vector<int>left,right;
             left.push_back(a);
             right.push_back(b);
             int i=n,count=x;
             while(count>0)
             {
                 if(i!=b)
                 {
                     left.push_back(i);
                     count--;
                 }
                 i--;
             }
             count=x,i=1;
             while(count>0)
             {
                 if(i!=a)
                 {
                     right.push_back(i);
                     count--;
                 }
                 i++;
             }
            for(auto i:left) cout<<i<<" ";
            for(auto i:right) cout<<i<<" ";
            cout<<endl;
         }
     }
     else if(a>b)
     {
         int l=n-a;
         int r=b-1;
         int x=(n/2)-1;
         if(l<x || r<x) cout<<-1<<endl;
         else
         {
             vector<int>left,right;
             left.push_back(a);
             right.push_back(b);
             int i=n,count=x;
             while(count>0)
             {
                 if(i!=b)
                 {
                     left.push_back(i);
                     count--;
                 }
                 i--;
             }
             count=x,i=1;
             while(count>0)
             {
                 if(i!=a)
                 {
                     right.push_back(i);
                     count--;
                 }
                 i++;
             }
            for(auto i:left) cout<<i<<" ";
            for(auto i:right) cout<<i<<" ";
            cout<<endl;
         }
     }}
        int main()
        {
            int t;
            cin >> t;
            while (t--)
            {
                int n, a, b;
                cin >> n >> a >> b;
                solve(n, a, b);
            }
        }