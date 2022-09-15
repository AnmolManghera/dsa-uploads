#include <bits/stdc++.h>
using namespace std;
//replace pi with 3.14

void replacePi(char a[],int i){
    //base case
    if(a[i]=='\0'|| a[i+1]=='\0'){
        return;
    }
    //look for pi
    if(a[i]=='p' && a[i+1]=='i'){
        //shifting followed by replacement
        int j=i+2;
        //take j to the end of array
        while(a[j]!='\0'){
            j++;
        }
        //shifting right to left
        while(j>= i+2){
            a[j+2]=a[j];
            j--;
        }
        //replacement followed by recursive call
        a[i]='3';
        a[i+1]='.';
        a[i+2]='1';
        a[i+3]='4';
        replacePi(a,i+4);

    }
    else{
        //go to the next position
        replacePi(a,i+1);
    }
    return;
}

int main()
{
    char a[]="pi";
    replacePi(a,0);
    cout<<a<<endl;
    return 0;
}