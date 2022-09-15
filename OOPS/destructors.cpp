//goal - to clear out the memory occupied
#include<iostream>
#include<cstring>
using namespace std;
class Car{
    private:
    float price;
    public:
    int model_no;
    char*name;
    Car(){
        name=NULL;
    }
    Car(char *n,float p, int m){
        price = p;
        model_no = m;
        name= new char[strlen(n)+1];
        strcpy(name,n);
    }
    Car(Car&x){
        price=x.price;
        model_no=x.model_no;
        // avoid name= x.name 
        name = new char[strlen(x.name)+1];
        strcpy(name,x.name);
    }
    void setPrice(float p){
        price = p;
    }
    void print(){
        cout<<"Name "<<name<<endl;
        cout<<"Model_No "<<model_no<<endl;
        cout<<"Price "<<price<<endl;
    }
    // ~Car(){
    //     cout<<"Inside Destructor of Car "<<name<<endl;;
    // }
    ~Car(){
        cout<<"Destroying car "<<name<<endl;
        if(name!=NULL)
        {
            delete [] name;
        }
        
    }
};
int main(){
    //statically created car
    Car c("BMW",100,200); //parameterised constructor
    Car d(c); //copy constructor
    c.print();

    d.setPrice(500);
    d.name[0]='A';
    d.print();

    //dynamically created car
    Car *e = new Car("ferari",10,20); 
    e->print();
    //use delete keyword to delete dynamically created objects
    delete e;
    return 0;
}