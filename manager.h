#include <iostream>
#include "person.h"
#include "ItemList.h"
using namespace std;

class manager : public Person {
public:
	manager(string);
	void additem(Item, ItemList&);
	void setQty(string, ItemList&, int);
};