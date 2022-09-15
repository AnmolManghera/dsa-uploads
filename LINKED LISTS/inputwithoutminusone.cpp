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
void insertAtTail(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*tail=head;
    while(tail->next != NULL){
        tail=tail->next;
    }
    tail->next =new node(d);
    return;
}
node*take_input(){
    int n;
    cin>>n;
    node*head=NULL;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        insertAtTail(head,no);
    }
    return head;
} 
int main()
{
    node*head=take_input();
    print(head);
    return 0;
}