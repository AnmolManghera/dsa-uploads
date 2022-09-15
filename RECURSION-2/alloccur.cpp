#include <bits/stdc++.h>
using namespace std;
int storeOcc(int *a,int i,int n,int key,int *out,int j){
    if(i==n){
        return j;
    }
    if(a[i]==key){
        out[j]=i;
        //increase j to accomodate new occurence
        return storeOcc(a,i+1,n,key,out,j+1);
    }
    return storeOcc(a,i+1,n,key,out,j);

}
void allOcc(int *a,int i,int n,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    allOcc(a,i+1,n,key);
}
int main(){
    int arr[]={1,2,3,7,4,5,7,8,5};
    int key=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    allOcc(arr,0,n,key);
    cout<<endl;
    int output[100];
    int count=storeOcc(arr,0,n,key,output,0);
    cout<<count<<endl;
    for(int k=0;k<count;k++){
        cout<<output[k]<<" ";
    }
    return 0;
}