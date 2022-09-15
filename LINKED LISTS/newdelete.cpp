#include <iostream>
using namespace std;

int main()
{
    //dynamic allocation
    int n;
    cin>>n;
    int*a=new int[n];
    //int*a=new int[n]{0};
    cout<<sizeof(a)<<endl;

    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    //free the space
    delete [] a;
    
    return 0;
}