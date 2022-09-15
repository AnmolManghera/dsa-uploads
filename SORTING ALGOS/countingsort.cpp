#include <iostream>
#include <algorithm>
using namespace std;
void counting_sort(int arr[],int n){
    int largest=-1;
    for(int i=0;i<n;i++){
        largest =max(largest,arr[i]);
    }
    //create a freq array
    int *freq = new int[largest+1]{0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    //put the elements back into the original array by reading freq array
    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={88,97,10,12,15,1,5,6,12,5,8};
    int n=11;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    counting_sort(arr,n);
    
    return 0;
}