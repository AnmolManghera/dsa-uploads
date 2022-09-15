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
		cout << "->" << head->data;
		head = head->next;
	}
}
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
// Overloading the ostream operator '<<'
// to print the complete linked list from
// beginning
void operator<<(ostream& os, node* head)
{
	print(head);
    return;
}
// Overloading the istream operator '>>'
// to take continuous input into the linked
// list until user inputs -1
void operator>>(istream& is, node*& head)
{
	takeInput(head);
    return;
}
void reverse(node*&head){
    node*C=head;
    node*P=NULL;
    node*N;
    while(C!=NULL){
        //save the next node
        N=C->next;
        //make the current node point to prev
        C->next =P;
        //update P and C take them one step forward
        P=C;
        C=N;
    }
    head=P;
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
	return shead;

}
int main(){
	node* head = NULL;
    
    // Overloading of '>>' for inserting
	// element in the linked list
	cin >> head;
    cout<<head;
    cout<<endl;
    head=recRev(head);
    // Overloading of '<<' for printing
	// element in the linked list
	cout << head;
    
	return 0;
}
