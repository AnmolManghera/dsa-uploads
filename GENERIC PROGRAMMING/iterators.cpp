#include <iostream>
using namespace std;
template<typename T>
int search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    return n;
}
template<class A,class B>
template<class ForwardIterator ,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key){
    while(start!=end){
        if(*start == key){
            return start;
        }
        start++;
    }
    return end;
}

int main()
{   /*
    int arr[]={1,3,5,7,10,12};
    int n=sizeof(arr)/sizeof(int);
    cout<<search(arr,n,10)<<endl;
    search()
    */
   list<int>l;
   l.push_back(1);
   l.push_back(22);
   l.push_back(33);
   l.push_back(5);
   auto it=search(l.begin(),l.end(),5){
       cout<<*it<<endl;
   }

    return 0;
}