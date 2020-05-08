
#include <sstream>
#include "Country.h"
#include <cstring>
#include <cctype>

Country::Country() {
	int cases=-1;
	name="";

}

Country::Country(string s){
	char in[20]; //initializing character array
		int length = s.length() + 1;
		strcpy(in, s.c_str()); //converting string to character array
		string country = "";
		string cases_s="";
		int cases_t;
		int curr;
		for (curr = 0; curr <= length; curr++) {
			if ((((int) in[curr] <= 122) && ((int) in[curr] >= 97)||(((int) in[curr] <= 90) && ((int) in[curr] >= 65))) //checking to make sure the input is letters using ascii
			) {
				country = country + in[curr];

			}
			if(curr==':'){
				curr=curr+1;
			}
			if ((((int) in[curr] >= 48) && ((int) in[curr] <= 57))) //checking to make sure the input is digits using ascii
				cases_s+=in[curr];

		}
		stringstream cases_ch(cases_s);
		cases_ch >> cases_t;
		this->name=country;
		this->cases=cases_t;
}
Country::Country(const string &name, const int &cases) {
	this->name = name;
	this->cases = cases;
}

void Country::setBoth(string s){
	char in[100]; //initializing character array
			int length = s.length() + 1;
			strcpy(in, s.c_str()); //converting string to character array
			string country = "";
			string cases_s="";
			int cases_t;
			int curr;
			for (curr = 0; curr <= length; curr++) {
				if ((((int) in[curr] <= 122) && ((int) in[curr] >= 97)||(((int) in[curr] <= 90) && ((int) in[curr] >= 65))) //checking to make sure the input is letters using ascii
				) {
					country = country + in[curr];

				}
				if(curr==':'){
					curr=curr+1;
				}
				if ((((int) in[curr] >= 48) && ((int) in[curr] <= 57))) //checking to make sure the input is digits using ascii
					cases_s+=in[curr];

			}
			stringstream cases_ch(cases_s);
			cases_ch >> cases_t;
			this->name=country;
			this->cases=cases_t;
}

void Country::display(){
	cout<<name<<": "<<cases;
}

bool Country::operator >(const Country &other) {
	return ((this->cases) > (other.cases));
}
bool Country::operator >=(const Country &other) {
	return ((this->cases) >= (other.cases));
}
bool Country::operator <(const Country &other) {
	return ((this->cases) < (other.cases));
}
bool Country::operator <=(const Country &other) {
	return ((this->cases) <= (other.cases));
}
bool Country::operator ==(const Country &other) {
	return ((this->cases) == (other.cases));
}
bool Country::operator >(const int &othercases) {
	return ((this->cases) > (othercases));
}
bool Country::operator >=(const int &othercases) {
	return ((this->cases) >= (othercases));
}
bool Country::operator <(const int &othercases) {
	return ((this->cases) < (othercases));
}
bool Country::operator <=(const int &othercases) {
	return ((this->cases) <= (othercases));
}
bool Country::operator ==(const int &othercases) {
	return ((this->cases) == (othercases));
}


