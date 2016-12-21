#ifndef ITEMLIST_H
#define ITEMLIST_H

#include"Item.h"

class ItemList
{
private:
	int listSize;
	Item* header;
public:
    ItemList();
    int getSize();
    void addItem(Item neww);
//  void additemlast(Item neww);
//  void insertitem(int i,Item neww);
    void deleteitem(int i);
    Item& operator[](int i);
	void displayMenu(ItemList);
};

#endif // ITEMLIST_H
