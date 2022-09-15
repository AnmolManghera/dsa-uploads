#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student{
    int marks;
    string name;
};
void bucket_sort(Student s[],int n){
    //assume marks are in 0 to 100 range
    vector<Student>v[101];
    for(int i=0;i<n;i++){
        int m=s[i].marks;
        v[m].push_back(s[i]);
    }
    //iterate over the vector
    for(int i=100;i>=0;i--){
        for(vector<Student>::iterator it=v[i].begin();it !=v[i].end();it++){
            cout<<(*it).marks<<" "<<(*it).name<<endl;
        }
    }
}
int main()
{
    Student s[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].marks>>s[i].name;
    }    
    return 0;
}