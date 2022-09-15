#include <iostream>
using namespace std;

int main()
{
    int n,no;
    cin>>n;
    //array of fixed size is a constant space always
    int cnt[64]={0};
    for(int i=0;i<n;i++){
        cin>>no;
        //update the cnt array by extracting bits
        int j=0;
        while(no>0){
            int last_bit = (no&1);
            cnt[j]+=last_bit;
            j++;
            no=no>>1;
        }
    }
    //iterate over the array and form the answer by converting 0 and 1 into number
    int p=1;
    int ans=0;
    for(int i=0;i<64;i++){
        cnt[i]%=3;
        ans+= (cnt[i]*p);
        p=p<<1;
    }
    //print the final ans
    cout<<ans<<endl;
    return 0;
}
