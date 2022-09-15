#include <bits/stdc++.h>
using namespace std;
int climb(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans=0;
   // return climb(n-1)+climb(n-2)+climb(n-3);
    for(int i=1;i<=k;i++){
        ans+=climb(n-i,k);
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<climb(n,k);
    return 0;
}