#include <iostream>
#include "person.h"
#include "ItemList.h"
using namespace std;

class worker : public Person {
public:
	worker(string);
	void printInfo();
	void additem(Item, ItemList&);
	void setQty(string, ItemList&, int);
};