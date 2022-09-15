#include <bits/stdc++.h>
using namespace std;
//break a string about any character(delimiter)

int main()
{
    char s[100]="today is a rainy day";
    char*ptr=strtok(s," ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
        char*ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }
    return 0;
}