#include <bits/stdc++.h>
using namespace std;
void generate(string in,string out){
    if(in.size()==0){
        cout<<out<<" ";
        return;
    }

    char ch=in[0];
    in=in.substr(1);
    generate(in,out);
    generate(in,out+ch);

}

int main()
{
    string s;
    cin>>s;
    generate(s,"");
    cout<<endl;
    int n= (1<<s.size());
    cout<<n<<endl;
    return 0;
}