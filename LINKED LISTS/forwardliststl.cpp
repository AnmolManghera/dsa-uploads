#include <iostream>
#include <list>//doubly linked list
using namespace std;

int main()
{
    list<int>l;

    list<int>l1{1,2,3,10,8,5};

    list<string>l2{"Apple","Guava","Mango","Banana"};
    l2.push_back("pineapple");

    for(auto s:l2){
        cout<<s<<"-->";
    }
    l2.sort();
    cout<<endl;
    for(auto s:l2){
        cout<<s<<"-->";
    }
    l2.reverse();
    cout<<endl;
    for(auto s:l2){
        cout<<s<<"-->";
    }
    //pop front
    cout<<l2.front()<<endl;
    l2.pop_front();
    //add to front of the list
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();
    cout<<endl;
    for(auto s:l2){
        cout<<s<<"-->";
    }
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<" -->";
    }

    l2.push_back("orange");
    l2.push_back("Guava");
    cout<<endl;
    for(string s:l2){
        cout<<s<<"->";
    }
    //remove a fruit(all occurrences)
    // string f;
    // cin>>f;
    l2.remove("Guava");
    cout<<endl;
    for(string s:l2){
        cout<<s<<"->";
    }
    //erase one or more elemenst
    auto it=l2.begin();
    it++;
    it++;
    l2.erase(it);

    //we can insert elements in the list
    it =l2.begin();
    it++;
    l2.insert(it,"FruitJuice");
    return 0;
}