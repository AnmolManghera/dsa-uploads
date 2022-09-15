#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
    node(int d){
		data = d;
		next = NULL;
	}
};
void insertAtHead(node*& head, int d){
	node* n = new node(d);
	n->next = head;
	head = n;
}
void insertAtTail(node* head, int data){
	node* n = new node(data);
	node* temp = head;
    while (temp->next != NULL)
		temp = temp->next;
    temp->next = n;
}
void print(node* head){
	if (head != NULL) {
		cout << head->data;
		head = head->next;
	}
    while (head != NULL) {
		cout << " " << head->data;
		head = head->next;
	}
}
void takeInput(node*& head,int n){
    int i=0;
	while (i != n) {
        int in;
	    cin >> in;
        if (head == NULL){
			insertAtHead(head, in);
            i++;
        }
		else{
			insertAtTail(head, in);
            i++;
        }
	}
}
void operator<<(ostream& os, node* head)
{
	print(head);
    return;
}
int main(){
    int n,k;
    cin>>n>>k;
    node* head = NULL;
    takeInput(head,n);
    //if(k==0 || n==0 || k==1)
	cout << head;
    return 0;
}
