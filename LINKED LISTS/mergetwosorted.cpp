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
node*merge(node*a,node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    // take a head pointer
    node*c;
    if(a->data < b->data){
        c=a;
        c->next=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;  

}
int main(){
	node* head = NULL;
    node* head1 = NULL;
    // Overloading of '>>' for inserting
	// element in the linked list
	cin >> head;
    cin >> head1;
    // Overloading of '<<' for printing
	// element in the linked list
	cout << head;
    cout<<endl;
    cout << head1;
    cout<<endl;
    node*newHead=merge(head,head1);
    cout<<newHead;
	return 0;
}
