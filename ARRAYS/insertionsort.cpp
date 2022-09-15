#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++ ){
        int r =arr[i];
        //place this at the right place in the sorted part
        int j=i-1;
        while(j>=0 && arr[j]>r){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=r;
        
    }
}
int main(){
    int arr[]={23,45,76,956,-1,-23};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}