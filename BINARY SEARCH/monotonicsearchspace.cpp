#include<iostream>
using namespace std;
float sqrt(int n,int p){
    int s=0;
    int e=n;
    float ans=-1;
    while(s<=e){
        int mid=(s+e)>>1;
        if(mid*mid ==n){
            return mid;
        }
        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    float inc=0.1;
    for(int times=1;times<=p;times++){
        while(ans*ans <= n){
            ans = ans + inc;
        }
        //overshot the value
        ans = ans - inc;
        inc = inc / 10;
    }
    return ans;
}
int main(){
    //square root of n
    //int n = 10;
    
    //cin>>n;
    cout<<sqrt(10,3);
    return 0;
}