#include <bits/stdc++.h>
using namespace std;
char *myStrtok(char *str,char delim){
    //input-string and single char as delim
    static char*input=NULL;
    if(str!=NULL){
        //we are making first call
        input=str;
    }
    //check here-base case
    if(input==NULL){
        return NULL;
    }
    //start extracting tokens and store them in an array
    char *output=new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++){
        if(input[i]!=delim){
            output[i]=input[i];
        }
        else{
            output[i]='\0';
            input=input+i;
            return output;
        }

    }
    //corner case
    output[i]='\0';
    input=NULL;
    return output;

}
int main(){
    char s[100]="today is a rainy day";
    char*ptr=myStrtok(s,' ');
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr=myStrtok(NULL,' ');
        cout<<ptr<<endl;
    }
    return 0;
}