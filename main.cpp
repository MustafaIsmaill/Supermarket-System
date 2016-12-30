#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include "ItemList.h"
#include "cart.h"
#include <string>
#include <sstream>
#include "manager.h"
#include <fstream>
#include <stdlib.h>
using namespace std;

double char2Double(char c) {
	istringstream ss(c);
	double n;
	ss >> n;
	return n;
}
string char2Str(char c) {
	stringstream ss;
	string s;
	ss << c;
	ss >> s;
	return s;
}
char* str2Char(string s) {
	char *arr = new char[s.size() + 1];
	arr[s.size()] = 0;
	memcpy(arr, s.c_str(), s.size());
	return arr;
}

int main(){
	ItemList list;
	ifstream in("products.txt");
	ofstream out("output.txt");
	int lines = 0;
	string line;
	ifstream myfile("products.txt");
	int count = 0;
	Item n;
	while (getline(myfile, line, ' ')) {
		++lines;
		if (lines == 1) {
			count = 0;
			continue;
		}
		count++;
		if (count == 1) { n.setcode(atoi(line.c_str())) ; }
		if (count == 2) { n.setcost(stod(line)); }
		if (count == 3) { n.setName(line) ; }
		if (count == 4) {
			n.setQty(atoi(line.c_str()));
			list.addItem(n);
		}
		if (count == 5) {
			count = 0;
		}
	}

	list.displayMenu();
	cart c;
	c.addItem(list);

	c.displayCart();
	cout << endl;
	return 0;
}

#endif