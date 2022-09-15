#include <bits/stdc++.h>
using namespace std;
void magical_park(char a[][100], int m ,int n,int k,int s){
    bool success=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char ch = a[i][j];

            //check 
            if(s<k){
                success=false;
                break;
            }
            if(ch=='*'){
                s+=5;
            }
            else if(ch=='.'){
                s-=2;
            }
            else{
                break;
            }
            //we also loose 1 point when we move right except at end column
            if(j!= n-1){
                s--;
            }
        }
    }
    if(success){
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main()
{
    
    return 0;
}