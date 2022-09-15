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
node*midPoint(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next !=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
int main()
{
    node* head = NULL;
    
    // Overloading of '>>' for inserting
	// element in the linked list
	cin >> head;
    cout<<head;
    node*mid=midPoint(head);
    cout<<mid->data;
    cout<<endl;
    return 0;
}