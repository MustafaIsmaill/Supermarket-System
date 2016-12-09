#include <iostream>
#include "product.h"
using namespace std;

product::product() {
	productName = "N\A";
	supplierName = "N\A";
	qty = 0; 
	ID = "N\A";
};
string product::getProductName(){
	return productName;
}
string product::getSuppName() {
	return supplierName;
}

int product::getQty() {
	return qty;
}

void product::displayInfo(product p) {
	cout << "Name: " << p.getProductName << endl << "Qty: " << p.getQty << endl;
}
void product::setQty() {
	qty += 1;
}
void product::setProductName(string n) {
	productName = n;
}
void product::setSuppName(string n) {
	supplierName = n;
}

void product::setID(string i) {
	ID = i;
}

string product::getID() {
	return ID;
}