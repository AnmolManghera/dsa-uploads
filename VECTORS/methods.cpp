#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>d{1,2,3,4,5};
    d.push_back(16);
    d.pop_back();

    //insert in middle
    d.insert(d.begin()+3, 100);
    d.insert(d.begin()+3, 4 ,100); // insert 100 four times

    //erase some elements in the middle
    d.erase(d.begin()+3);

    //erase range of elements
    d.erase(d.begin()+2,d.begin()+5);

    //size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid the shrink
    d.resize(8);
    cout<<d.capacity()<<endl;

    //remove all elements of vector
    //doesnt delete memory occupied by array
    d.clear();

    //empty
    if(d.empty()){
        cout<<"Vector is empty"<<endl;
    }

    //front
    cout<<d.front()<<endl;

    //reserve
    int n;
    cin>>n;
    vector<int>v;
    v.reserve(1000);
    for(int i=0; i<n;i++){

    }
    return 0;
}