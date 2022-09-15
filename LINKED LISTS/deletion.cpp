#include <iostream>
using namespace std;
class node{
public:
    int data;
    node*next;
    //constructor 
    node(int d){
        data=d;
        next=NULL;
    }
};
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ->";
        head=head->next;
    }
}
void inserAtHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*n =new node(d);
    n->next=head;
    head=n;
}
void deleteHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
}
//search ops
//linear search
bool search(node*head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(head->data == key){
            return true;
        }
        head=head->next;
    }
    return false;
}
//recursively
bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    if(head->data ==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
}
int main()
{
    node*head=NULL;
    inserAtHead(head,3);
    inserAtHead(head,2);
    inserAtHead(head,1);
    inserAtHead(head,0);
    print(head);
    if(searchRecursive(head,2)){
        cout<<"Found";
    };
    return 0;
}