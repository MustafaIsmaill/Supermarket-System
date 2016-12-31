#include "manager.h"

manager::manager(string name)
:Person(name)
{}
void manager::additem(Item i, ItemList &l) {
	l.addItem(i);
}
void manager::setQty(string n, ItemList& list, int q) {
	for (int i = 0; i < list.getSize(); i++) {
		if (list[i].getname() == n) {
			list[i].setQty(q);
		}
	}
}
