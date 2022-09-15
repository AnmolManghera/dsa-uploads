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
int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;

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
void insertInMiddle(node*&head,int d,int p){
    if(head==NULL || p==0){
        inserAtHead(head,d);
    }
    else if(p>length(head)){
        insertAtTail(head,d);
    }
    else{
        //take p-1 jumps
        int jump=1;
        node*temp =head;
        while(jump<= p-1){
            temp=temp->next;
            jump++;
        }
        //create new node
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }
    return;
}

int main()
{
    node*head=NULL;
    inserAtHead(head,3);
    inserAtHead(head,2);
    inserAtHead(head,1);
    inserAtHead(head,0);
    print(head);
    cout<<endl;
    insertInMiddle(head,4,3);
    print(head);
    cout<<endl;
    insertAtTail(head,7);
    print(head);
    return 0;
}