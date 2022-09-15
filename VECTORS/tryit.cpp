#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(vector<int>a,vector<int>b){
        return a[0]<b[0];
}
int main()
{
    
    vector<vector<int>>items1{ { 1, 1 },
                              { 4, 5 },
                              { 3,8 } };
    vector<vector<int>>items2{ { 3, 1 },
                              { 1, 5 } };

    int n1=items1.size();
    int n2=items2.size();
    sort(items1.begin(),items1.end(),compare);
    sort(items2.begin(),items2.end(),compare);
    int x=items1[n1-1][0];
    int y=items2[n2-1][0];
    int k=max(x,y);
    vector<int>arr(k+1,0);
    vector<vector<int>>res;
    for(int i=0;i<n1;i++){
        arr[items1[i][0]]+= items1[i][1];
    }
    for(int i=0;i<n2;i++){
        arr[items2[i][0]]+= items2[i][1];
    }
    
    for(int i=0;i<=k;i++){
        if(arr[i]){
            vector<int>temp(2);
            temp.push_back(i);
            temp.push_back(arr[i]);
            res.push_back(temp);
        }
    }
    return res;
}