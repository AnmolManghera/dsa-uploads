#include <iostream>
#include <stack>
using namespace std;
bool isValidExp(char*s){
    stack<char>st;
    for(int i=0;s[i]!='\0';i++){
        char ch=s[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            st.push(ch);
        }
        else if(ch==')'){
            if(st.empty() || st.top() != '('){
                return false;
            }
            st.pop();
        }
        else if(ch=='}'){
            if(st.empty() || st.top() != '{'){
                return false;
            }
            st.pop();
        }
        else if(ch==']'){
            if(st.empty() || st.top() != '['){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    char s[] ="(({[]}))[";
    if(isValidExp(s)){
        cout<<"Allowed";
    }
    else{
        cout<<"Illegal";
    }
    return 0;
}