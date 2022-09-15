#include<iostream>
using namespace std;
bool search(int mat[4][4],int n , int key){
    int i = 0;
    int j = n-1;
    while(i<n && j>=0){
        if(mat[i][j] ==  key){
            
            return true;
        }
        if(mat[i][j] > key){
            j--;
        }
        else{
            i++;
        }

    }
    cout<<"Not Found"<<endl;
    return false;

}
int main()
{
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    if(search(mat, 4, 29)){
        cout << "Element found ";
    }
 
    return 0;
}