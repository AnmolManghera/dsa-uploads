#include <bits/stdc++.h>
using namespace std;
int lastOcc(int*a,int n,int key){
    //base case
    if(n==0){
        return -1;
    }
    int i=lastOcc(a+1,n-1,key);
    if(i==-1){
        if(a[0]==key){
            return 0;
        }
        else{
            return -1;
        }

    }
    //otherwise if i returned by subprblm is not -1;
    return i+1;

}

int main()
{
     
    return 0;
}