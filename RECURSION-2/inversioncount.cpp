#include<iostream>
using namespace std;
int merge(int *a,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=(mid+1);
    int k=s;
    int temp[100000];
    int cnt=0; //count inversuions

    while(i<=mid && j<=e){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            k++;
            i++;
        }
        else{
            temp[k++]=a[j++];
            cnt+= mid-i+1;
        }
    }
    //fill left over array
    while(i<=mid){
        temp[k++]=a[j++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    //copy back elements
    for(int j=s; j<=e;j++){
        a[j]= temp[j];
    }
    return cnt;
}
int inversion_count(int *a,int s,int e){
    //base case
    if(s>=e){
        return 0;
    }
    //merege sort

    int mid=(s+e)/2;
    int x= inversion_count(a,s,mid);
    int y= inversion_count(a,mid+1,e);
    int z= merge(a,s,e); //cross inversions
    return x+y+z;
}
int main(){
    int arr[]={1,5,2,6,3,8};
    int n=6;
    cout<<inversion_count(arr,0, n-1);
    return 0;
}