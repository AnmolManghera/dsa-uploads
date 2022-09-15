#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a=10;
    int b=20;
    swap(a,b);
    cout<<a<< " and "<<b<<endl;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    int arr[]={1,2,3,4,4,5};
    reverse(arr,arr+4);
    int n=6;
    next_permutation(arr,arr+n);
    
    return 0;
}