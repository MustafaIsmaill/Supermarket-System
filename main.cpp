#include <iostream>
#include "ItemList.h"
#include "cart.h"
#include <string>
#include "manager.h"
using namespace std;

int main(){
	Item Chipsy(4, 5.5 ,"Chipsy");
	Item Pepsi(3, 6, "Pepsi");
	Item Milk (2, 3, "Milk");
	Item Zabado(1, 8.5, "Zabado");
	Item Twix(5, 6, "Twix");
	Twix.setQty(12);
	Zabado.setQty(4);
	Pepsi.setQty(10);
	Milk.setQty(5);
	ItemList I1;

	I1.addItem(Chipsy);	
	I1.addItem(Pepsi);
	I1.addItem(Milk);
	I1.addItem(Zabado);
	I1.addItem(Twix);
//	I1.deleteitem(3);
//	I1.deleteitem(5);

	cout << "		***Menu***" << endl;
	I1.displayMenu(I1);
	cout << endl << "		***Cart***" << endl;
	cart c;
	c.addItem(I1);
	c.displayCart(c);
//	cout << endl << "***Menu***" << endl;
//	I1.displayMenu(I1);

	return 0;
}