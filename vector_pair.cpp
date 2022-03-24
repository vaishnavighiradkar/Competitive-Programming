#include<bits/stdc++.h>
using namespace std;
int count_digit(int n){
    int c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    cout<<count_digit(123);
}