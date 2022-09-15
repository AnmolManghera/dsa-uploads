#include <iostream>
#include <string>
#include <set>
using namespace std;
void permute(char*in,int i,set<string> &s){
    //base case
    if(in[i]=='\0'){
        //cout<<in<<endl;
        string t(in);
        s.insert(t);
        return;
    }
    //rec case
    for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        permute(in,i+1,s);
        //backtracking step-to restore the original array;
        swap(in[i],in[j]);
    }
}
int main()
{
    char in[100];
    cin>>in;
    set<string>s;
    permute(in,0,s);


    for(auto str:s){
        if(str<in){
            cout<<str<<endl;
        }
    }
    return 0;
}