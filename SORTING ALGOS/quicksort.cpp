#include <bits/stdc++.h>
using namespace std;
int partition(int*arr,int s ,int e){
    //inplace sorting
    int i=s-1;
    int j=s;

    int pivot=arr[e];
    for(;j<= e-1 ;j++){
        if(arr[j]<=pivot){
            //merge the smaller element in the region-1
            i=i+1;
            swap(arr[i],arr[j]);
        }
        //expand the larger region
        j=j+1;
    }
    //place the pivot element in the correct index
    swap(arr[i+1],arr[e]);
    return i+1;


}
void quicksort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //rec case
    int p=partition(arr,s,e);
    //left part
    quicksort(arr,s,p-1);
    //right part
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[]={3,1,2,4,5};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}