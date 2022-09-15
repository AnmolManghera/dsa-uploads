#include <bits/stdc++.h>
using namespace std;
int friends(int n){
    if(n==0){
        return 0;
    }
    else{
        return friends(n-1)+friends(n-2);
    }
}

int main()
{
    
    return 0;
}