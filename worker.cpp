#include "worker.h"
#include <string>

worker::worker(string name)
:Person(name)
{}
void worker::additem(Item i, ItemList &l) {
	l.addItem(i);
}
void worker::setQty(string n, ItemList& list, int q) {
	for (int i = 0; i < list.getSize(); i++) {
		if (list[i].getname() == n) {
			list[i].setQty(q);
		}
	}
}
void worker::printInfo() {
	cout << "Employee: " << name << endl;
}
