

#include "Hash.h"



Hash::Hash() {
	table = new LinkedList[buckets];

}

int Hash::findHash(Country *countryObj1) {
	string s = countryObj1->name;
	char char_array[s.length() + 1];
	strcpy(char_array, s.c_str());
	long sum=0;
	for(int i=0;i<s.length() + 1;i++)
		sum +=(int)char_array[i];
	return sum%buckets;


}

void Hash::insertObjH(Country *countryObj1) {
	int index=findHash(countryObj1);
	table[index].insert(countryObj1);

}

void Hash::delObjH(string s){
	Country *countryObj1=new Country(s,0);
	int index=findHash(countryObj1);
	table[index].delCountry(countryObj1->name);

}

void Hash::displayH(){
	cout <<"\nDisplaying Hash Table: \n";
	for(int i=0;i<buckets;i++){
		cout<<i<<" ";
		table[i].displayLL();
		cout<<endl;
	}
}

