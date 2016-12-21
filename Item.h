#ifndef ITEM_H
#define ITEM_H

#include<iostream>
using namespace std;


class Item
{
private:
	int code,qty;
	string name;
	Item *next;

public:
	friend class ItemList;
        Item(int i,string n, int q);
        Item(int i,string n,int q, Item* ne);
        void setnext(Item *i);
        Item* getnext();
        int getid();
        string getname();
		int getQty();
		void setQty();
		friend ostream& operator<<(ostream& os, const Item &st);

};

#endif // ITEM_H
