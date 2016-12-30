#include "cart.h"
#include <string>
using namespace std;

cart::cart() {
	cartHeader = NULL;
	itemQty = 0;
	cartSize = 0;
}
void cart::addItem(ItemList l){
	cout << "Please enter the name of the products you want to add, and enter 0 when finished." << endl;
	for (int i = 0; i <= itemQty; i++) {
		int count = 0, j = 0;
		string choice;
		getline(cin, choice);
		for (j = 0; j < l.getSize() ; j++) {
			if (l[j].getname() ==  choice && l[j].getQty()>0) {
				break;
			}
			if (j == l.getSize() - 1 && choice != "0") {
				cout <<"Not found in stock" << endl;
				count++;
				i--;
			}
		}
//	label:
		if (choice == "0") { i--; break; }
		else if (count == 0) {
			if (cartHeader == NULL)
			{
				cartHeader = new Item(l[j].getid(), l[j].getCost(), l[j].getname(), l[j].cartQty, l[j].getnext());
				cartSize++;
				cartHeader->cartQty++;
//				cartHeader->qty += l[j].getQty();
				l[j].qty--;
				itemQty++;
			}
			else {
				int count1 = 0;
				Item *currentItem = cartHeader;
				for (int i = 0; i < cartSize; i++) {
					if (currentItem->getid() != l[j].getid()) {
						currentItem = currentItem->getnext();
					}
					else if(currentItem->getid() == l[j].getid()){
						count1++;
						i--;
						break;
					}
				}
				if (count1 == 0) {
					cartHeader = new Item(l[j].getid(), l[j].getCost(), l[j].getname(), l[j].cartQty, cartHeader);
					cartSize++;
					cartHeader->cartQty++;
//					cartHeader->qty += l[j].getQty();
					l[j].qty--;
					itemQty++;
				}
				else {
//					j--;
					currentItem->cartQty++;
					l[j].qty--;
//					cartHeader->qty += l[j].getQty();
					itemQty++;
					i--;
				}

			}
		}
	}
}
void cart::displayCart() {
	cout << endl;
	double total = 0;
	Item *currentItem = cartHeader;
	for (int i = 0; i < cartSize; i++) {
		cout << *currentItem << endl;
		total += (currentItem->cartQty*currentItem->cost);
		currentItem = currentItem->getnext();
	}
	cout << "Total is: " << total << " EGP"<< endl;
}
Item& cart::operator[](int i) {
	Item *ptr = cartHeader;
	for (int j = 0; j<i; j++) {
		ptr = ptr->getnext();
	}
	return *ptr;
}
void cart::removeItem(Item name) {
	
}