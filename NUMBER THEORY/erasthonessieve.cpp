#include <iostream>
using namespace std;
#define ll long long
//naive approach
// bool isPrime(int n){
//     if(n==1){
//         return false;
//     }
//     if(n==2){
//         return true;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0)
//             return false;
//     }
//     return true;
// }
//sieve approach -directly generate an array of prime numbers
void primesieve(int n){
    int p[n+1]={0};
    //first mark all odd numbers prime
    for(int i=3;i<=n;i+=2){
        p[i]=1;
    }
    //sieve
    for(int i=3;i<=n;i++){
        //if the current number is not marked(it is prime)
        if(p[i]==1){
            //mark all the multiples of i as not prime
            for(int j = i*i;j<=n;j=j+i){
                p[j]=0;
            }
        }
    }
    //special case
    p[2]=1;
    p[1]=p[0]=0;
    for(int k=2;k<=n;k++){
        if(p[k]=1){
            cout<<k<<" ";
        }
    }
    //return;
}
int main()
{
    int n;
    cin>>n;
    primesieve(n);
    return 0;
}