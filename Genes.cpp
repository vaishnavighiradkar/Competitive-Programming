#include<bits/stdc++.h>
using namespace std;
int main(){
    char p1,p2;
    cin>>p1>>p2;
    if(p1==p2){
        cout<<p1<<endl;
    }
    else if(p1=='R'||p2=='R'){
        cout<<'R'<<endl;
    }
    else if(p1=='G'){
        cout<<p2<<endl;
    }
    else if(p2=='G'){
        cout<<p1<<endl;
    }
}