#ifndef ITEM_H
#define ITEM_H
#include<string>
#include<iostream>
using namespace std;


class Item
{
    friend class ItemList;
    public:
Item();
        Item(int i,string n);
        Item(int i,string n,Item* ne);
        void setnext(Item *st);
        Item* getnext();
        int getid();
        string getname();
        friend ostream& operator<<(ostream& os,const Item &i);


    private:
        int ID;
        string name;
        Item* next;

};

#endif // ITEM_H
