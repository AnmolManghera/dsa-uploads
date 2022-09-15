#include <bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}
int main()
{
    
    int n;
    cin>>n;
    cin.get();
    string s[100];//arrays of strings
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