#include "Item.h"
#include<string>



Item::Item(){

ID=0;
name="   ";
next=NULL;


}
Item::Item(int i,string n)
{
    ID=i;
    name=n;
    next=NULL;
}

Item::Item(int i,string n,Item* ne)
{
    ID=i;
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
return ID;
}
