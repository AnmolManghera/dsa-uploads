#include<iostream>
#include<stack>
using namespace std;
void greSimpleArray(int arr[],int n){
    int soln[n]={0};
    stack<int>s;
    for(int i= (n-1) ; i>=0 ; i--){
        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }
        if(i<n){
            if(!s.empty()){
                soln[i] = s.top();
            }
            else{
                soln[i] = -1;
            }
        }
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
		cout<<soln[i]<<" ";
	}
}
void greCircularArray(int arr[],int n){
    int soln[n]={0};
    stack<int>s;
    for(int i= (2*n-1) ; i>=0 ; i--){
        while(!s.empty() && s.top() <= arr[i%n]){
            s.pop();
        }
        if(i<n){
            if(!s.empty()){
                soln[i] = s.top();
            }
            else{
                soln[i] = -1;
            }
        }
        s.push(arr[i%n]);
    }
    for(int i=0;i<n;i++){
		cout<<soln[i]<<" ";
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    greSimpleArray(arr,n);
    cout<<endl;
    greCircularArray(arr,n);
    
	return 0;
}