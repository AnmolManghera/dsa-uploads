#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void brackets(char*out,int n,int idx,int open,int close,vector<string>&v){
	if(idx==2*n){
		string t(out);
		v.push_back(t);
		return;
	}
	if(open<n){
		out[idx]='(';
		brackets(out,n,idx+1,open+1,close,v);
	}
	if(close<open){
		out[idx]=')';
		brackets(out,n,idx+1,open,close+1,v);
	}
	return;
}
int main() {
	int n=2;
    //cin>>n;
    char out[1000];
	vector<string>v;
	int idx=0;
	brackets(out,n,0,0,0,v);
    //reverse(v.begin(), v.end());
	for(auto s:v){
		cout<<s<<endl;
	}
	return 0;
}