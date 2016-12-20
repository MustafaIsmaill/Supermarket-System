#ifndef ITEMLIST_H
#define ITEMLIST_H

#include"Item.h"

class ItemList
{
    public:
         ItemList();
        int getsize();
        void additemfirst(Item neww);
        void additemlast(Item neww);
        void insertitem(int i,Item neww);
        void deleteitem(int i);
        Item& operator[](int i);


    private:
        int Itemcount;
        Item* header;

};

#endif // ITEMLIST_H
