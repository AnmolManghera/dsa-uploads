#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    return b=0? a:gcd(b,a%b);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    return 0;
}
// gcd *lcm =product of two numbers