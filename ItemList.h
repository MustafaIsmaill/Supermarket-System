#ifndef ITEMLIST_H
#define ITEMLIST_H

#include"Item.h"

class ItemList
{
protected:
	int listSize;
	Item* header;
public:
//	friend class cart;
    ItemList();
	inline int getSize() { return listSize; }
    void addItem(Item neww);
//  void additemlast(Item neww);
//  void insertitem(int i,Item neww);
    void deleteitem(int i);
    Item& operator[](int i);
	void displayMenu(ItemList);
};

#endif // ITEMLIST_H
