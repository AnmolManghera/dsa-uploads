#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=0;i< n-1 ;i++){
        for(int j=0 ; j< (n-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    
    int arr[]={23,45,76,956,-1,-23};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
