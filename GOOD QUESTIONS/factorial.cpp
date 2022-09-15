#include<iostream>
using namespace std;
#define MAX 1200
int returnSize(int k,int rSize, int a[]){
	int carry = 0;
	for(int j=0;j<rSize;j++){
		int prod=a[j]*k +carry;
		a[j]=prod%10;
		carry=prod/10;
	}
	while(carry){
		a[rSize] = carry % 10;
		carry=carry/10;
		rSize++;
	}
	return rSize;
}
void func(int n){
	int a[MAX];
	a[0]=1;
	int rSize = 1;
	for(int i=2;i<=n;i++){
		rSize = returnSize(i,rSize,a);
	}
    for(int i= rSize-1;i>=0;i--){
        cout<<a[i];
    }
}

int main() {
	int n =100;
	//cin>>n;
	func(n);
	return 0;
}