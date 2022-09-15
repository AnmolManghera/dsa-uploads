#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    /*
    string s0;
    string s1("helleo");
    string s2="hello world";

    string s3(s2);

    string s4=s3;
    char a[]={'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    if(s0.empty()){
        cout<<"empty"<<endl;
    }
    //append
    s0.append(" i love c++");
    cout<<s0<<endl;

    s0 += "and Python";
    cout<<s0<<endl;

    //remove 
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;
    */
    string s0 ="apple";
    string s1="mango";
    cout<<s0.compare(s1)<<endl;
    cout<<s1.compare(s0)<<endl;
    // Returns:
    // 0 : if both strings are equal.
    // A value < 0 : if *this is shorter than str or,
    // first character that doesn't match is smaller than str.
    // A value > 0 : if *this is longer than str or,
    // first character that doesn't match is greater
    // if(s1>s0){
    //     cout<<"mango is lexographically greater";
    // }
    // else{
    //     cout<<"apple is lexographically greater";
    // }
    cout<<s0[1]<<endl;
    //find substrings
    string s="i want to have apple juice";
    int idx=s.find("apple");
    cout<<idx<<endl;

    //remove a word from string
    string word="apple";
    int len = word.length();
    s.erase(idx,len+1);
    cout<<s<<endl;

    //iterate over all the characters in the string
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<":";
    }
    cout<<endl;
    //iterators
    for(auto it= s.begin(); it != s.end(); it++ ){
        cout<<(*it)<<" ,";
    }
    cout<<endl;
    //for each loop
    for(auto c: s1){
        cout<<c<<".";
    }

    return 0;
}