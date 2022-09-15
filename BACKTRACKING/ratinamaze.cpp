#include <iostream>
using namespace std;
bool ratInMaze(char maze[10][10],int soln[][10],int i,int j,int m,int n){
    if(i== m && j== n){
        soln[m][n]=1;
        //print the path
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<soln[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    //rat should be in the grid
    if(i>m || j>n){
        return false;
    }
    if(maze[i][j]=='X'){
        return false;
    }
    //Assume soln exists thru current cell
    soln[i][j]=1;
    //cout<<"Calling lefts at "<<i+1 <<" "<<j<<endl;
    bool lefttSuccess=ratInMaze(maze,soln,i+1,j,m,n);
    //cout<<"Calling rights at "<<i<<" "<<j+1 <<endl;
    bool rightSuccess=ratInMaze(maze,soln,i,j+1,m,n);
    //backtracking
    soln[i][j]=0;
    if( rightSuccess || lefttSuccess){
        //cout<<"Backtracking at"<<i<<" "<<j<<endl;
        return true;
    }
    return false;
}
int main()
{
    char maze[10][10]={
         "OOX",
         "XOO",
         "XOO",
         
    };
    int soln[10][10]={0};
    int m=3 ,n=3;
    bool ans = ratInMaze(maze,soln,0,0,m-1,n-1);
    if(ans==false){
        cout<<"Path doesnt exist !";
    }
    
    return 0;
}