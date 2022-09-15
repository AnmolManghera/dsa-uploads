#include <bits/stdc++.h>
using namespace std;
int power(int a,int n){
    //time complexity is O(n)
    if(n==0){
        return 1;
    }
    return a*power(a,n-1);
}
int fast_power(int a,int n){
    //depth of call stack is logN(base 2)
    if(n==0){
        return 1;
    }
    //rec case
    int small_ans=fast_power(a,n/2);
    small_ans*=small_ans;

    //if n is odd
    if(n&1){
        return small_ans*a;
    }
    return small_ans;

}


int main()
{
    int a,n;
    cin>>a>>n;
    cout<<fast_power(a,n)<<endl;
    return 0;
}