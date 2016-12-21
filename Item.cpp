#include "Item.h"
#include<string>

Item::Item(int i,string n, int q)
{
	qty = q;
    code=i;
    name=n;
    next=NULL;
}
Item::Item(int i,string n,int q, Item* ne)
{
	qty = q;
    code=i;
    name=n;
    next=ne;
}
void Item::setnext(Item* ne){
	next=ne;
}
Item* Item::getnext(){
	return next;
}
string Item::getname(){
	return name;
}
int Item::getid(){
	return code;
}
int Item::getQty() {
	return qty;
}
ostream& operator<<(ostream& os, const Item &item) {
	os << "Item Code: " << item.code << "  " << "Name: " << item.name << "  Qty: " << item.qty << endl;
	return os;
}
void Item::setQty() {
	qty++;
}