#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}

};
void insertAtEnd(node*&head,int d){
	if(head==NULL){
		head =new node(d);
		return;
	}
	node*tail=head;
	while(tail->next != NULL){
		tail=tail->next;
	}
	tail->next=new node(d);
	return;
}
node*input(){
	int d;
	cin>>d;
	node*head=NULL;
	while(d != -1){
		insertAtEnd(head,d);
		cin>>d;
	}
	return head;

}
int kthFromEnd(node*head,int k){
	node*fast=head;
	node*slow=head;
	int count = 0;
	while(count<=k){
		fast=fast->next;
		count++;
	}
	while(fast!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	return slow->next->data;
}
int main() {
	node*head=input();
	int k;
	cin>>k;
	cout<<kthFromEnd(head,k);
	return 0;
}