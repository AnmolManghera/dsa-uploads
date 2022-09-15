#include <bits/stdc++.h>
#include <climits>
using namespace std;
int largest(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return max;
}
int smallest(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[]={23,45,76,956,-1,-23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,n)<<endl;
    cout<<smallest(arr,n);
    return 0;
}