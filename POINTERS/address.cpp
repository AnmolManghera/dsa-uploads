#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=10;
    cout<< &x <<endl;

    float y=10.5;
    cout<< &y<<endl;

    //it doesnt work for character variables
    char ch='A';
    cout<<&ch<<endl;

    //explicit typecasting from char* to void*
    cout<<(void*)&ch<<endl;

    return 0;
}