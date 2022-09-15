#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][4]={0};
    for(int row=0;row<5;row++){
        for(int col=0;col<4;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int val=1;
    for(int row=0;row<5;row++){
        for(int col=0;col<4;col++){
            a[row][col]=val;
            val+=1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    //taking size as input of array
    int m,n;
    cin>>m>>n;
    int matrix[m][n];
    return 0;
}