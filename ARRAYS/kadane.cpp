#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-8,8,-9,9,-10,11,-12};
    int n = sizeof(arr)/sizeof(arr[0]);
    //kadane's algorithm
    int curr_sum = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        curr_sum = curr_sum + arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        maxi=max(curr_sum,maxi);
    }
    cout<<maxi;
    return 0;
}
