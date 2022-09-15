#include <iostream>
using namespace std;
bool isOdd(int n){
    /*for even-odd take and with 1
            if ans is odd , no is odd
            if ans is even , no is even
    */
    return (n & 1);

}

int getBit(int n,int i){
    /* To create mask left shift 1 by i times */
    int mask = 1<<i;
    int bit = (n&mask) >0 ? 1:0;
    return bit;
}

int setBit(int &n,int i){
    int mask=(1<<i);
    int ans = n|mask;
    // this is bitwise OR - |
    return ans;
}

int main()
{
    //set bit is called 1
    //unset bit is called 0
    //same numbers da xor 0
    int n=28;
    int i=2;
    int m=5;
    int j=1;
    cout<<isOdd(n)<<endl;
    cout<<getBit(n,i)<<endl;
    cout<<setBit(m,j)<<endl;
    
    return 0;
}