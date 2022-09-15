#include<iostream>
using namespace std;

int main()
{
    //one way
    pair<int,char>p;
    p.first=10;
    p.second='V';
    

    //second way
    //p2 is also same as p
    pair<int,char>p2(p);
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    //third way
    pair<int,string>p3=make_pair(100,"Audi");
    cout<<p3.first<<endl;
    cout<<p3.second<<endl;

    //take input
    int a,b;
    cin>>a>>b;
    pair<int,int>p4=make_pair(a,b);

    //array of pairs
    //vector of pairs
    pair<pair<int,int>,string>car;
    car.second="Audi";
    car.first.first=10;
    car.first.second=20;
    return 0;
}