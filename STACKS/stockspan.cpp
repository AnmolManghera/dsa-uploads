#include <iostream>
#include<stack>
using namespace std;
void stockSpan(int prices[],int n,int span[]){
    stack<int>s; //indices of the days;
    s.push(0);
    span[0]=1;
    //loop for rest of days;- O(N)
    for(int i=0;i<n;i++){
        int currentPrice = prices[i];
        //topmost element higher than the current price
        while(!s.empty() and prices[s.top()]<=currentPrice){
            s.pop();

        }
        if(!s.empty()){
            int prev_highest= s.top();
            span[i] = i-prev_highest;
        }
        else{
            span[i]=i+1;
        }
        //push this element back into the stack
        s.push(i);
    }
}
int main()
{
    int prices[]={100,80,60,70,60,75,85};
    int n=7;
    int span[100000]={0};
    stockSpan(prices,n,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
    return 0;
}