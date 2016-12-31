#include <iostream>
#include "ItemList.h"

class cart {
private:
	int itemQty, cartSize;
	Item *cartHeader;
public:
	cart();
	void addItem(ItemList);
	inline int getQty() { return itemQty;}
	inline int getCartSize() { return cartSize; }
	void displayCart();
	void removeItem(string i );
	Item& operator[](int i);
};