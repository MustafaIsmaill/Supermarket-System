#include <iostream>
#include "ItemList.h"
using namespace std;

int main(){
	Item Chipsy(2, "Chipsy", 2);
	Item Pepsi(1, "Pepsi", 1);
	Item Milk (3, "Milk", 3);
	Item Zabado(4, "Zabado", 4);

	ItemList I1;
	I1.addItem(Chipsy);
	I1.addItem(Pepsi);
	I1.addItem(Milk);
	I1.addItem(Zabado);
	I1.addItem(Zabado);
	I1.deleteitem(1);
	I1.deleteitem(3);
	I1.deleteitem(5);

	I1.displayMenu(I1);

	return 0;
}