
#include "Node.h"

Node::Node() {

	next = NULL;

	 *left=NULL;
	 *right=NULL;
	 *parent=NULL;

}
Node::Node(Country *countryObj1) {
	countryObj = countryObj1;
}
