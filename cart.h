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
	void displayCart(cart);
	void removeItem(Item i );
	Item& operator[](int i);
};