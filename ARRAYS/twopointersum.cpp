#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,3,5,7,9,11,13,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    int sum=16;
    int curr_sum=0;
    while(i<j){
        curr_sum = arr[i]+arr[j] ;
        if(curr_sum>sum){
            j--;
        }
        else if(curr_sum<sum){
            i++;
        }
        else if(curr_sum==sum){
            cout<<arr[i]<<" AND "<<arr[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}