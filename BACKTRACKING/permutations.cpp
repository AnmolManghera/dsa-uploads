#include <iostream>
#include<string>
using namespace std;
void permute(string in,int i){
    //base case
    if(i==in.length()){
        cout<<in<<endl;
        return;
    }
    //rec case
    // for(int j=i;in[j]!='\0';j++){
    //     swap(in[i],in[j]);
    //     permute(in,i+1);
    //     //backtracking step-to restore the original array;
    //     swap(in[i],in[j]);
    // }
    for(int j=i;j<in.length();j++){
        cout<<"swapping "<<i<<" "<<j<<endl;
        swap(in[i],in[j]);
        cout<<"calling function on "<<i+1<<endl;
        permute(in,i+1);
        //backtracking step-to restore the original array;
        cout<<"reswapping "<<i<<" "<<j<<endl;
        swap(in[i],in[j]);
    }
}
int main()
{
    string in="abc";
    // char in[100]= "abc";
    //cin>>in;
    permute(in,0);
    return 0;
}