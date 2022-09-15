#include <iostream>
using namespace std;
int countBits1(int n){
    int ans=0;
    while(n>0){
        ans+= (n&1);
        n=n>>1;
    }
    return ans;
}

int countBits2(int n){
    int ans=0;
    while(n>0){
        n= n&(n-1); //this line removes the last set bit
        ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<countBits1(n);
    //this is a built-inmethod
    cout<<__builtin_popcount(n);
    return 0;
}