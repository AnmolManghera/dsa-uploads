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
void takeInput(node*& head){
	int n;
	cin >> n;
    while (n != -1) {
        if (head == NULL)
			insertAtHead(head, n);
		else
			insertAtTail(head, n);
		cin >> n;
	}
}
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
		cout << "->" << head->data;
		head = head->next;
	}
}

node*recRev(node*head){
    //smallest linked list
    if(head->next==NULL or head==NULL){
        return head;
    }
    //rec case
    node*shead=recRev(head->next);
    node*temp=shead;
    while(temp->next != NULL){
        temp=temp->next;
    }
    head->next=NULL;
    temp->next=head;

}