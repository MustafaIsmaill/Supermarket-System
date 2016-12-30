#include "ItemList.h"
#include <string>

ItemList::ItemList(){
	header = NULL;
	listSize = 0;
}
Item& ItemList::operator[](int i){
		Item *ptr=header;
		for(int j=0 ; j<i ; j++){
				ptr=ptr->getnext();
			}
		return *ptr;
}
void ItemList::deleteitem(int id)
{
	Item *currentItem = header;
	int i;
	for (i = 0; i < listSize; i++) {
		if (currentItem->getid() == id) {
			header = currentItem->getnext();
			listSize--;
			break;
		}
		else if (currentItem->getnext() == NULL) {
			cout << "Item code: "<< id << " was not found." << endl << endl;
			break;
		}
		else if (currentItem->getnext()->getid() != id) {
			currentItem = currentItem->getnext();
		}
		else if (currentItem->getnext()->getid() == id) {
			currentItem->setnext(currentItem->getnext()->getnext());
			listSize--;
			break;
		}
	}
}
void ItemList::addItem(Item neww) {
	if (header == NULL)
	{
		header = new Item(neww.getid(),neww.getCost(), neww.getname(),neww.getQty(), neww.getnext());
		listSize++;
	}
	else {
		int count = 0;
		Item *currentItem = header;
		for (int i = 0; i < listSize; i++) {
			if (currentItem->getid() != neww.getid()) {
				currentItem = currentItem->getnext();
			}
			else {
				count++;
				break;
			}
		}
		if (count == 0) {
			header = new Item(neww.getid(), neww.getCost(), neww.getname(), neww.getQty(), header);
			listSize++;
		}
		else {
			cout << "Error: \"" << neww.getname() << "\" already exists" << endl << endl;
		}
		
	}
}
void ItemList::displayMenu() {
	Item *currentItem = header;
	for (int i = 0; i < listSize; i++) {
		if (currentItem->getQty() > 0) {
			cout << *currentItem << endl;
			currentItem= currentItem->getnext();
		}
	}
}