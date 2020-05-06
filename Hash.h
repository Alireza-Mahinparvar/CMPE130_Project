
#include "LinkedList.h"

class Hash {//hash table of linked lists
	LinkedList *table;
	int buckets=13;
public:
	Hash();


	int findHash(Country *countryObj1);
	void insertObjH(Country *countryObj1);//inserting object to hash table
	void delObjH(string s);//delete object from hash table
	void displayH();

};


