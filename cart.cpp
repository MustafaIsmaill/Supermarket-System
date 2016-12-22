#include "cart.h"
#include <string>
using namespace std;

cart::cart() {
	cartHeader = NULL;
	itemQty = 0;
	cartSize = 0;
}
void cart::addItem(ItemList l){
	cout << "Please enter the name of the products you want to add, and enter 0 when finished. Also enter the qty of each" << endl;
	int q;
	for (int i = 0; i < l.getSize(); i++) {
		int count = 0, j;
		string choice;
		getline(cin, choice);
		for (j = 0; j < l.getSize(); j++) {
			if (l[j].getname() ==  choice) {
				break;
			}
			if (j == l.getSize()-1 && choice != "0") {
				cout << "Item not available" << endl;
				count++;
				i--;
			}
		}
		if (choice == "0") { i--; break; }
		else if (count != 1) {
			if (cartHeader == NULL)
			{
				l[j].setCqty(l[j].getCqty() + 1);
				l[j].setQty(l[j].getQty() - 1);
				cartHeader = new Item(l[j].getid(), l[j].getCost(), l[j].getname(), l[j].getQty(), l[j].getnext());
				cartSize++;
			}
			else {
				int count = 0;
				Item *currentItem = cartHeader;
				for (int i = 0; i < cartSize; i++) {
					if (currentItem->getid() != l[j].getid()) {
						currentItem = currentItem->getnext();
					}
					else {
						count++;
						break;
					}
				}
				if (count == 0) {
					l[j].setCqty(l[j].getCqty() + 1);
					l[j].setQty(l[j].getQty() - 1);
					cartHeader = new Item(l[j].getid(), l[j].getCost(), l[j].getname(), l[j].getQty(), cartHeader);
					cartSize++;
				}
				else {
					l[j].setCqty(l[j].getCqty() + 1);
					l[j].setQty(l[j].getQty() - 1);
					i--;
				}

			}
		}
	}
}
void cart::displayCart(cart c) {
	for (int i = 0; i < c.getCartSize(); i++) {
		cout << c[i] << endl;
	}
}
Item& cart::operator[](int i) {
	Item *ptr = cartHeader;
	for (int j = 0; j<i; j++) {
		ptr = ptr->getnext();
	}
	return *ptr;
}