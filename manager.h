#include <iostream>
#include "person.h"
#include "ItemList.h"
using namespace std;

class manager : public Person {
public:
	manager();
	void additem(Item, ItemList);
};