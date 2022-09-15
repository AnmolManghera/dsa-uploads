#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100000];
    int no;
    int xoro=0;
    
    for(int i=0;i<n;i++){
        cin>>no;
        a[i]=no;
        xoro=xoro^no;
    }
    //xoro =a^b
    int temp=xoro;
    int pos=0;
    while((temp&1)==0){
        pos++;
        temp=temp>>1;
    }
    //The first set bit in xoro is at position 'pos;
    int mask= 1<<pos;

    //find those numbers which contain set bit at pos
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        if((a[i]&mask) >0){
            x=x^a[i];
        }
    }
    y = xoro^x;
    return 0;
}