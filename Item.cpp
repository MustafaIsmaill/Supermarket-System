#include "Item.h"
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
//	cartQty = q;
	cost = c;
	qty =q;
    code=i;
    name=n;
    next=ne;
}
void Item::setnext(Item* ne){
	next=ne;
}
ostream& operator<<(ostream& os, const Item &item) {
	os << "Name: " << item.name << "  Cost: " << item.cost << " EGP" << "  qty: " << item.qty << endl;
	return os;
}
void Item::setQty(int q) {
	qty = q;
}