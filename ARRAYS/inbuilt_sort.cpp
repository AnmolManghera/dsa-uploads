#include <bits/stdc++.h>
using namespace std;
bool compare(int a ,int b){
    return a>b;
}
int main(){
    int arr[]={23,45,76,956,-1,-23};
    int n = sizeof(arr)/sizeof(arr[0]);
    //sort(arr,arr+n,);
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
}