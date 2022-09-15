#include <bits/stdc++.h>
using namespace std;
int stringtoint(char*a,int n){
    if(n==0){
        return 0;
    }
    //assci of '0' is 48
    int digit=a[n-1]- '0';
    int small_ans=stringtoint(a,n-1);
    return small_ans*10 + digit;
}

int main()
{
    char a[]="1234";
    int len =strlen(a);
    int x= stringtoint(a,len);
    cout<<x;
    return 0;
}