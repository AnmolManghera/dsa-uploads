#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={10,10,40,40,40,50,90,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=90;
    cin>>key;
    bool present= binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    //Two more things 
    //Get the index of the element (it-arr) gives the index
    auto lb = lower_bound(arr,arr+n,40); 
    cout<<(lb-arr)<<endl; 
    if((lb-n)==n ){
        cout<<"element is not present";
    }
    auto ub = upper_bound(arr,arr+n,40); 
    cout<<(ub-arr)<<endl;

    cout<<"Occurence of 40 is "<<(ub-lb);

    //freq of element= upper_bound - lower_bound

}