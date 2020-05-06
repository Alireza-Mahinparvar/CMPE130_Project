#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <tuple>
#include <utility>
#include <map>
#include <fstream>

using namespace std;

class Country {
public:
	Country();
	int cases;
	string name;
	Country(string s);
	Country(const string&, const int&);
	//Country(string, int);
	void setBoth(string s);
	void display();
	bool operator>(const Country &other);
	bool operator>=(const Country &other);
	bool operator<(const Country &other);
	bool operator<=(const Country &other);
	bool operator==(const Country &other);
	bool operator>(const int &otherID);
	bool operator>=(const int &otherID);
	bool operator<(const int &otherID);
	bool operator<=(const int &otherID);
	bool operator==(const int &otherID);
};

