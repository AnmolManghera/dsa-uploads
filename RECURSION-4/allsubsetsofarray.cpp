#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int>&A,vector<vector<int>>&ans,vector<int>&temp,int i){
    if(i== A.size() ){
        ans.push_back(temp);
        return;
    }
    //rec case
    temp.push_back(A[i]);
    subsets(A,ans,temp,i+1);
    temp.pop_back();
    subsets(A,ans,temp,i+1);
    return;
}
int add(vector<int>v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=+v[i];
    }
    return sum;
}
int main(){
    vector<int>A={1,2,3};
    vector<int>temp;
    vector<vector<int>>ans;
    // for(int i=0;i<n;i++){
    //     cin>>A[i];
    // }
    subsets(A,ans,temp,0);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    bool final= false;
    for(auto v:ans){
        if(add(v)==0 && v.size()>0){
            final=true;
        }
    }
    if(final){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}