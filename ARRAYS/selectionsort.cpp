#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i< n-1; i++){
        //find smallest in the unsorted array
        int min_index=i;
        for(int j=i;j< n ;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    int arr[]={23,45,76,956,-1,-23};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}