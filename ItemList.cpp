#include "ItemList.h"
#include"Item.h"
#include<string>
#include<iostream>
using namespace std;


ItemList::ItemList()
{

}

int ItemList::getsize(){
return Itemcount;

}
void ItemList::additemfirst(Item neww){
    if(header==NULL)
    {
        neww.next=NULL;
        header==new Item(neww.ID,neww.name);
        Itemcount++;

    }
    else{

        neww.next=header;
        header=new Item(neww.ID,neww.name,neww.next);
        Itemcount++;


    }
}

void ItemList::additemlast(Item neww){

  if(header==NULL)
    {
        neww.next=NULL;
        header==new Item(neww.ID,neww.name);
        Itemcount++;

    }
    else{

        Item* ptr;
        ptr=header;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr=new Item(neww.ID,neww.name,NULL);
        Itemcount++;
    }
}

void ItemList::insertitem(int i,Item neww){


  if(header==NULL)
    {
        neww.next=NULL;
        header==new Item(neww.ID,neww.name);
        Itemcount++;

    }
    else{
        Item* ptr;
        ptr=header;
        if(i==0)
        {
            additemfirst(neww);
        }
       else if(i==1)
        {
            neww.next=header;
            header=new Item(neww.ID,neww.name,neww.next);

        }
        else{
                Item* temp=header;;
          for(int j=0;j<i-2;j++)
        {
            temp=temp->next;
        }
        neww.next=temp->next;
        temp->next=new Item(neww.ID,neww.name,neww.next);



    }

}
}


Item& ItemList::operator[](int i){

Item *ptr=header;

for(int j=0;j<i;j++)

{
            ptr=ptr->next;
}
return *ptr;
}

void ItemList::deleteitem(int i)
{
    Item* ptr=header;
    if(i=1)
    {
        header=ptr->next;
        delete ptr;
    }


    for(int i=0;i<i-2;i++)
    {
        ptr=ptr->next;
    }
    Item* temp;
    temp=ptr->next;
    ptr->next=temp->next;
    delete ptr;
}
