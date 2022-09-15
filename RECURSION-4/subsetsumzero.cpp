#include<iostream>
using namespace std;
void subsets(int a[],int sum, int idx ,int n ,int count ){
    if(i==n){
        if(sum==0 && count>0){
           return true;
        }
        else{
            return false;
        }
    }
    bool ans1= subsets(a,sum+a[i],idx+1,n,count+1);
    bool ans2= subsets(a,sum,idx+1,n,count);
    return ans1 || ans2;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(subsets(a,0,0,n,0)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    

    return 0;
}