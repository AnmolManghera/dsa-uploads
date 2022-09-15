#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    // int arr[]={10,20,30,40,50};
    // int n=5;
    // rotate(arr,arr+2,arr+n);
    // return 0;

    //apply the same on a vector
    vector<int>v={1,2,3};
    // rotate(v.begin(),v.begin()+3,v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    //next_permutation
    next_permutation(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    next_permutation(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}