#include <iostream>
#include "menu.h"

menu::menu() {};
void menu::addProduct(product p) {
	int j;
	for (j = 0; j < 10; j++) {
		if (prod[j].getID() == "N\A") {
			prod[j] = p;
			break;
		}
		else if (prod[j].getID() == p.getID() ) {
			prod[j].setQty();
			break;
		}
	}
}

void menu::remProdcut(product p) {
	for (int i = 0; i < 10; i++) {
		if (prod[i].getID() == p.getID() ) {
			for (i; i < 10 - i; i++) {
				prod[i] = prod[i + 1];
			}
		}
	}
}