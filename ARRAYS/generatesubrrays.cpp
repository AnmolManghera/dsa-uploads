#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={23,45,76,956,-1,-23};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //elements of current subarray
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}