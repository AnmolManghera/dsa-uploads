#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(string a,string b){
    if(a.find(b)==0 || b.find(a)==0){
        return a.length()>b.length();
    }
    return a<b;
}
int main()
{
    
    int n;
    cin>>n;
    cin.get();
    string s[1000];//arrays of strings
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
        //cout<<s[i]<<endl;
    }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++){
        //getline(cin,s[i]);
        cout<<s[i]<<endl;
    }


    return 0;
}