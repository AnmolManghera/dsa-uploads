#include <iostream>
using namespace std;
double multiply(double number ,int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans=ans*number;
    }
    return ans;
}
void getNthRoot(int n,int m){
    double low=1;
    double high=m;
    double eps=0.000001; 
    while((high-low)>eps){
        double mid= (low+high)/2;
        if(multiply(mid,n)<m){
            low=mid;
        }
        else{
            high=mid;
        }
    } 
    cout<<low<<" "<<high<<endl;
}
int main()
{
    int n =3 ,m = 27;
    //cin>>n>>m;
    getNthRoot(n,m);
    return 0;
}