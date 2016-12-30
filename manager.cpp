#include "manager.h"

manager::manager()
:Person()
{}
void manager::additem(Item i, ItemList l) {
	l.addItem(i);
}