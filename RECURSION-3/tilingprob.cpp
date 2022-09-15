#include <bits/stdc++.h>
using namespace std;
int fourTiling(int n){
    if(n<=3){
        return 1;
    }
    else{
        return fourTiling(n-1)+fourTiling(n-4);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fourTiling(n);
    return 0;
}