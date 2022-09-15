#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
bool check(int arr[],int curr_mid, int k ,int n){
	int paintersUsed=1;
	int timeTaken = 0;
	for(int i = 0; i<n ;i++){
		if(timeTaken + arr[i] > curr_mid){
			paintersUsed++;
			timeTaken = arr[i];
			if(paintersUsed > k ){
				return false;
			}
		}
		else{
			timeTaken+=arr[i];
		}
	}
	return true;
}
int main() {
	int n,k,t;
	cin>>n>>k>>t;
	int arr[n];
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		arr[i]= no*t;
	}
    //sort(arr,arr+n);
	int sum=0;
	int ans=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int s = arr[n-1];
	int e= sum;
	while(s<=e){
		int mid= (s+e)/2;
		if(check(arr, mid, k ,n)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	cout<<ans;
	return 0;
}