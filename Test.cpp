
#include "Maxheap.h"
#include <string>

int main() {


	ifstream inFile("Test.txt"); //opening file
	string line;
	string in_string;
	Country arr[10];
	Hash hashTable;
	MinHeap minheap(10);
	MaxHeap maxheap(10);

	int i = 0;

	//reading file to string line
	while (getline(inFile, line)) { //reading file to string line

		in_string = line.c_str();
		Country *in_1 = new Country(in_string);
		hashTable.insertObjH(in_1);
		Country in_2(in_string);
		arr[i++] = in_2;
		//maxheap.insertX(in_2);

	}

	Country *in_3=new Country();

	string s;
	int t;

	int input = -1;
	int exit = -1;
	while (exit != 0) {
		cout
				<< "\nPlease select \n1 to display Hash Table\n2 to delete Country from Hash Table\n3 to add to Hash Table\n4 to view Countries in alphabetical order\n5to view Countries based on number of cases highest to lowest\n0to exit\n";
		cin >> input;
		switch (input) {
		case 1:
			hashTable.displayH(); //hashtable display
			break;
		case 2:
			cout << "Enter name of country to delete: ";
			cin >> s;
			hashTable.delObjH(s);
			break;
		case 3:
			cout<<"Enter name of country to add: ";
			cin>>s;
			cout<<"Enter number of cases in country "<<s<<": ";
			cin>>t;
			in_3=new Country(s,t);
			hashTable.insertObjH(in_3);
			break;
		case 4:
			minheap.sort(arr,10);
			break;
		case 5:
			maxheap.sortX(arr,10);
			break;
		case 0:
			exit = 0;
			break;
		default:
			cout << "Please enter valid value";
			break;
		}

	}

}
