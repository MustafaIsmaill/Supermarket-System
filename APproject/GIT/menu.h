#include <iostream>
#include "product.h"
using namespace std;

class menu {
private:
	product prod[10];
public:
	menu();
	void addProduct(product);
	void remProdcut(product);
};