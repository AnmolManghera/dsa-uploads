#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={23,45,76,956,-1,-23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int left=-1;
    int right=-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //elements of current subarray
            int curr_sum =0;
            for(int k=i;k<=j;k++){
                curr_sum+=arr[k];
            }
            cout<<curr_sum<<endl;
            if (curr_sum>max){
                max=curr_sum;
                left=i;
                right=j;
            }
        }
    }
    cout<<endl<<max<<endl;
    for(int i=left;i<=right;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}