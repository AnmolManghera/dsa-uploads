#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[10]={'a','b','c'};
    char b[10]={'a','b','c','d','e','\0'};

    // //input
    // char s[10];
    // cin>>s;//null chr is auto added at end when u print enter
    // cout<<s;
    char s1[]={'h','e','l','l','o'}; //5 bytes--must terminate by a null character
    char s2[]="hello"; //6 bytes
    cout<<s1<<" "<<sizeof(s1)<<endl;
    cout<<s2<<" "<<sizeof(s2)<<endl;
    
    char s3[10]="hello";
    char s4[10];
    cin>>s4;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}