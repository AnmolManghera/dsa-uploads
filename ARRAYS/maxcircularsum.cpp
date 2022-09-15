#include<iostream>
using namespace std;
int kadane(int arr[],int n){
	int curr_sum = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        curr_sum = curr_sum + arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        maxi=max(curr_sum,maxi);
    }
	return maxi;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
        int cum_sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
            cum_sum+=arr[i];
		}
		int maxi1=kadane(arr,n);
		for(int i=0;i<n;i++){
			arr[i]= -arr[i];
		}
		int maxi=kadane(arr,n);
        int maxi2=cum_sum-(-maxi);
		cout<<max(maxi1,maxi2)<<endl;
	}	
	return 0;
}