#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][4];
    int val=1;
    for(int row=0;row<5;row++){
        for(int col=0;col<4;col++){
            a[row][col]=val;
            val+=1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int col=0;col<4;col++){
        //row loop depends on direction
        if(col%2==0){
            //even col-top down
            for(int row=0;row<5;row++){
                cout<<a[row][col]<<" ";
            }
            cout<<endl;
        }
        else{
            //odd col-bottom up
            for(int row=4;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
            cout<<endl;

        }
    }
    return 0;
}