#include<iostream>
using namespace std;
int func(int n){
    if(n==0 || n==1){
        return n;
    }
    return func(n-1) + func(n-2);
    
}
int main()
{
    int n=3;
    cout<<func(n);
    return 0;
}