#include "Item.h"
#include "ItemList.h"
#include<string>
#include <sstream>
using namespace std;

Item::Item(int i,double c, string n)
{
	cartQty = 0;
	qty = 1;
	cost = c;
    code=i;
    name=n;
    next=NULL;
}
Item::Item(int i,double c, string n, int q, Item* ne)
{
//	cartQty++;
	cost = c;
	qty =q;
    code=i;
    name=n;
    next=ne;
}
Item::Item(int i, double c, string n, int q) {
	code = i;
	cost = c;
	name = n;
	qty = q;
	cartQty = 0;
	next = NULL;
}

void Item::setnext(Item* ne){
	next=ne;
}
ostream& operator<<(ostream& os, const Item &item) {
	if (item.cartQty > 0) {
		os << "Name: " << item.name << "  ||  Cost: " << item.cost << " EGP  " << "||  Qty " << item.cartQty << endl;
	}
	else {
		os <<"Name: "<< item.name << " ||  Cost: " << item.cost << " EGP  " << "||  Qty " << item.qty << endl;
	}
	return os;
}