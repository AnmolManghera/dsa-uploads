#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[][10],int n){
    //reverse each row
    for(int i=0;i<n;i++){
        int start_col=0;
        int end_col= n-1;
        while(start_col<end_col){
            swap(arr[i][start_col],arr[i][end_col]);
            start_col++;
            end_col--;
        }
        
    }

    //to take transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}
int main(){
    int a[10][10];
    int n;
    cin>>n;
    int val=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            a[row][col]=val;
            val+=1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rotate(a,n);
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}