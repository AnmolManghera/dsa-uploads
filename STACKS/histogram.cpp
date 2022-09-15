#include<iostream>
#include<stack>
#define xl long long 
using namespace std;
xl maxArea(xl hist[],int n){
    stack<int>s;
    xl maxArea =0;
    xl topEleInd,areaWCBasMin;
    int i=0;
    while(i<n){
        if(s.empty() || hist[i]>=hist[s.top()]){
            s.push(i);
            i++;
        }
        else{
            topEleInd=s.top();
            s.pop();
            areaWCBasMin=hist[topEleInd]*(s.empty()? i : i-s.top()-1);
            if(areaWCBasMin>maxArea){
                maxArea=areaWCBasMin;
            }
        }
    }
    while(!s.empty()){
        topEleInd=s.top();
        s.pop();
        areaWCBasMin=hist[topEleInd]*(s.empty()? i : i-s.top()-1);
        if(areaWCBasMin>maxArea){
            maxArea=areaWCBasMin;
        }
    }
    return maxArea;
}
int main()
{
    int n;
	cin>>n;
	xl hist[n];
    for(int i=0;i<n;i++){
        cin>>hist[i];
    }
    cout<<maxArea(hist,n);
    return 0;
}