#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,-1,3,-1,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cs[n];
    cs[0]=arr[0];
    for(int i=1;i<n;i++){
        cs[i]= cs[i-1]+arr[i];
    }
    int max=INT_MIN;
    int left=-1;
    int right=-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //elements of current subarray
            int curr_sum =0;
            curr_sum = cs[j]-cs[i-1];
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