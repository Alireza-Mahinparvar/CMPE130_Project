
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
}
LinkedList::LinkedList(Node *head1) {
	head = head1;
}
void LinkedList::setHead(Node *head1) {
	head = head1;
}
void LinkedList::insert(Country *countryObj1) {
	Node *N = new Node(countryObj1);
	N->next = head;
	head = N;
}

void LinkedList::displayLL() {
	Node *p = head;
	while (p) {
		p->countryObj->display();
		cout << "->";
		p = p->next;

	}
	cout << "NULL";
}

Node* LinkedList::search(string countryName) {
	Node *p = head;
	while (p) {
		if (countryName == p->next->countryObj->name)
			return p;
		if (p->next == NULL) {
			//throw "Element not found";
			return NULL;
		}
		p = p->next;
	}
}

void LinkedList::delCountry(string countryName) {
	/*

	 if(countryName==head->countryObj->name){
	 head=head->next;
	 return;
	 }

	 Node *p=search(countryName);


	 if(p==NULL){
	 cout<<"Element not found\n";
	 }
	 else
	 p->next=p->next->next;

	 */
	Node *temp = head, *prev;
	if (temp != NULL && temp->countryObj->name == countryName) {
		head = temp->next;
		return;
	}


	while (temp != NULL && temp->countryObj->name != countryName) {
		prev = temp;
		temp = temp->next;
	}

	// If key was not present in linked list
	if (temp == NULL){
		cout<<"Element not found\n";
		return;
	}


	prev->next = temp->next;


}

