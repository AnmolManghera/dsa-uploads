#include <iostream>
using namespace std;
int count=0;
bool isSafe(int board[][10],int i ,int j,int n){
    //you can check for col
    for(int row=0;row<=i;row++){
        if(board[row][j]==1){
            return false;
        }    }
    //you can check for left diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    //you can check for right diagonal
    x=i;
    y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    //The position is now safe , col and diagonals
    return true;

}
bool solveNQueen(int board[][10],int i,int n){
    //base case
    if(i==n){
        count++;
        //you have successfully placed queens in n rows(0.....n-1)
        //print the board
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    //recursive case
    //try to place queen in the current row and call on the remaining part which will be solved by recursion
    for(int j=0;j<n;j++){
        //I have to check if i,j th position is safe to place the queen or not 
        if(isSafe(board,i,j,n)){
            //place the queen assuming i,j is right position
            board[i][j]=1;
            bool nextQueenRakhPaye = solveNQueen(board,i+1,n);
            if(nextQueenRakhPaye){
                return true;
            }
            //means i,j is not the right position-assumption is wrong
            board[i][j]=0; //backtrack
        }
    }
    //you have tried for all positions in the current row but couldnt place the queen
    return false;

}
int main()
{
    int n=4;
    //cin>>n;
    int board[10][10]={0};
    solveNQueen(board,0,n);
    cout<<endl<<count;
    return 0;
}