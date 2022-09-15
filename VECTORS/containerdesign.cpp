#include<iostream>
using namespace std;
template<typename T>
class Vector{
    int cs;
    int ms;
    T*arr;
    public:
    Vector(){
        cs=0;
        ms=1;
        arr=mew T[ms];
    }
    void push_back(const T data){
        if(cs==ms){
            //array is full
            T *oldArr= arr;
            arr=new T[2*ms];
            ms=2*ms;
            for(int i=0;i<cs;i++){
                arr[i]=oldArr[i];
            }
            //clear the old memory
            delete [] oldArr;   
        }
        arr[cs]=data;
        cs++;
    }
    void pop_back(){
        cs-;
    }
    T front(){
        return arr[0];
    }
    T back(){
        return arr[cs-1];
    }
    bool empty(){
        return cs=0;
    }
    int capacity() const{
        return ts;
    }
    T at(const int i){
        return arr[i];
    }
    //operator overloaduing
    T operator[](const int i){
        return arr[i];
    }
};
int main()
{
    
    return 0;
}