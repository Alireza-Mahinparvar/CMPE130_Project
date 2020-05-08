
#include "Node.h"
using namespace std;

class LinkedList {
private:


public:
	Node *head;
	int position=0;
	LinkedList();
	LinkedList(Node *head1);
	void setHead(Node *head1);//setting head
	void insert(Country *countryObj1);//inserting object to linked list
	void displayLL();//displaying linked list
	Node* search(string countryName);//searching for object in linked list
	void delCountry(string countryName);//deleting object in linked list
};

