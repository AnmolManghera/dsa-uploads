#include<iostream>
#include<cmath>
using namespace std;
long long int multiply(int mid, int k){
	// long long int ans= 1;
	// for(long long int i = 1 ; i<=k ; i++){
	// 	ans= ans*k;
	// }
	return pow(mid,k);
}
long long int getKthRoot(int n,int k ){
	long long int s= 1;
	long long int e= n;
    long long ans = 0;
	while(s<=e){
		long long int  mid= (s+e)>>1;
		if(multiply(mid,k) <= n ){
			s = mid;
            ans = mid;
		}
		else{
			e=mid;
		}
	}
	return ans;
}
int main() {
	long long int n,k;
	//cin>>n>>k;
    n=4;
    k=2;
	if(k == 1){
		cout<<n<<endl;
	}
	else{
		cout<<getKthRoot(n,k)<<endl;
	}
	
	return 0;
}