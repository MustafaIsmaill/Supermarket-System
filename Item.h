#ifndef ITEM_H
#define ITEM_H

#include<iostream>
using namespace std;


class Item
{
protected:
	int code,qty,cartQty;
	double cost;
	string name;
	Item *next;

public:
	friend class ItemList;
	friend class cart;
		Item() {};
        Item(int i,double c, string n);
        Item(int i,double c, string n,int q, Item* ne);
        void setnext(Item *i);
		inline double getCost() { return cost; }
		inline void setName(string n) { name = n; }
		inline Item* getnext() { return next; }
		inline int getid() { return code; }
		inline string getname() { return name; }
		inline int getQty() { return qty; }
		inline int getCqty() { return cartQty; }
		inline void setCqty(int q) { cartQty = q; }
		inline void setQty(int q) { qty = q; }
		friend ostream& operator<<(ostream& os, const Item &st);
};

#endif // ITEM_H
