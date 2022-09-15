#include <bits/stdc++.h>
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
void take_input(node*head){


}
void insertAtHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*n =new node(d);
    n->next=head;
    head=n;
}
node*take_input_2(){
    int d;
    cin>>d;
    node*head=NULL;
    while(d!= -1){
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
} 
node*take_input_from_file(){
    int d;
    node*head=NULL;
    while(cin>>d){
        insertAtHead(head,d);
        
    }
    return head;
} 

int main()
{
    //node*head=take_input_2();
    node*head=take_input_from_file();
    print(head);
    return 0;
}