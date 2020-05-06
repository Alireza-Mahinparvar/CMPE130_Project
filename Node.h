#include "Country.h"
class Node
{
   public:
       Country *countryObj;
       int key;
       Node *next;
       Node *left;
       Node *right;
       Node *parent;
       \
       Node();
       Node(Country *countryObj1);
};
