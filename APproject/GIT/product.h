#include <iostream>
using namespace std;

class product {
private:
	string productName, supplierName, ID;
	int qty;
public:
	product();
	void setProductName(string);
	void setSuppName(string);
	void setQty();
	void setID(string);
	string getProductName();
	string getSuppName();
	int getQty();
	string getID();
	void displayInfo(product);
};