#ifndef ITEMLIST_H
#define ITEMLIST_H

#include"Item.h"

class ItemList
{
protected:
	int listSize;
	Item* header;

public:
	void addItem(Item neww);
	void deleteitem(int i);
	friend class manager;
    ItemList();
	inline int getSize() { return listSize; }
    Item& operator[](int i);
	void displayMenu(ItemList);
};

#endif // ITEMLIST_H
