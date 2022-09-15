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
//linked class(oops)
/*
class LinkedList{
    node*head;
    node*tail;

};
*/
//funtions(procedural)
void inserAtHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*n =new node(d);
    n->next=head;
    head=n;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ->";
        head=head->next;
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

    return 0;
}