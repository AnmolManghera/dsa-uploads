#include<iostream>
using namespace std;

int main()
{
    int a[]={1,3,4,2,7,4};
    int n=6;
    for(int i=0i<n;i++){
        //prev element
        if(i!=0 && arr[i]<arr[i-1]){
            swap(a[i],a[i-1]);
        }
        //next elemnt
        if(i!=n-1 && a[i]<a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    //print the array
    return 0;
}