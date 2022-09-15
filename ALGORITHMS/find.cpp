#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;;
    auto it=find(arr,arr+n,key);
    cout<<it<<endl; //here we get the address

    int index=it-arr;
    if(index==n){
        cout<<key<<" Not Present";
    }
    cout<<index;

    return 0;
}