#include<iostream>
#include <cstring>
using namespace std;
#define n 8
bool valid(int nx,int ny,int mat[n][n]){
    return (nx>=0 && nx<n && ny>=0 && ny<n && mat[nx][ny] ==-1);
    
}
bool go(int mat[n][n],int x,int y,int mv,int dx[n],int dy[n]){
    if(mv== (n*n)+1){
        return 1;
    }
    for(int k=0;k<8;k++){
        int nx=x+dx[k];
        int ny=y+dy[k];
        if(valid(nx,ny,mat)){
            mat[nx][ny]=mv;
            if(go(mat,nx,ny,mv+1,dx,dy)==1){
                return 1;
            }
            mat[nx][ny]=-1;
        }
    }
    return 0;
}
int main()
{
    int mat[n][n];
    memset(mat,-1,sizeof(mat));
    mat[0][0]=1;
    int dx[8]={2,1,-1,-2,-2,-1,1,2};
    int dy[8]={1,2,2,1,-1,-2,-2,-1};
    if(go(mat,0,0,2,dx,dy)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    return 0;
}