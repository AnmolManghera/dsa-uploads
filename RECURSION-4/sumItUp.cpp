#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void func(vector<int>&v ,set<vector<int>>&ans,int idx, int sum, vector<int>&temp,int target){
    
    if(sum>target){
        return;
    }
    if(sum==target){
        ans.insert(temp);
        return;
    }
    if(idx==v.size()){
        return;
    }
    temp.push_back(v[idx]);
    func(v,ans,idx+1,sum+v[idx],temp,target);
    temp.pop_back();
    func(v,ans,idx+1,sum,temp,target);
    return;
}
int main()
{
	int n;
	cin>>n;
    vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	} 
	int target;
	cin>>target;
    sort(v.begin(),v.end());
    set<vector<int>>vec;
    vector<int>temp;
    func(v,vec,0,0,temp,target);
    for(auto it:vec){
        for(int i=0;i<it.size();i++){
            cout<<it[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}