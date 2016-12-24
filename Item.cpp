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
//	cartQty++;
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
	if (item.cartQty > 0) {
		os << "Name: " << item.name << "  Cost: " << item.cost << " EGP" << " Cart qty " << item.cartQty << endl;
	}
	else {
		os << "Name: " << item.name << " ||  Cost: " << item.cost << " EGP  " << "||  Qty in stock " << item.qty << endl;
	}
	return os;
}