#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>b(5,10); // five int with value 10
    vector<int>c(b.begin(),b.end());
    vector<int>d{1,2,3,10,14};
    for(auto it=b.begin();it != b.end();it++){
        cout<< *it <<" ,";
    }
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        //use pushback to avoid segmentation fault
    }
    return 0;
}