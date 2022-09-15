#include<iostream>
using namespace std;

int main()
{
    // int m,n;
    // cin>>m>>n;
    // int a[m][n];
    int m=4;
    int n=4;
    int a[m][n];
    int val=1;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            a[row][col]=val;
            val+=1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    int startRow=0;
    int startCol=0;
    int endRow=m-1;
    int endCol=n-1;
    while((startCol<=endCol) && (startRow<=endRow)){
        //first column
        for(int i = startRow ;i<=endRow ;i++){
            cout<<a[i][startCol]<<", ";
        }
        startCol++;
        //last row
        for(int i = startCol ;i <=endCol;i++ ){
            cout<<a[endRow][i]<<", ";
            
        }
        endRow--;
        if(endCol > startCol){
            //last column
            for(int i = endRow;i>=startRow;i-- ){
                cout<<a[i][endCol]<<", ";
            }
            endCol--;
        }
        if(endRow > startRow){
            //first row
            for(int i= endCol;i>=startCol;i--){
                cout<<a[startRow][i]<<", ";
            }
        }
        
    }
    return 0;
}