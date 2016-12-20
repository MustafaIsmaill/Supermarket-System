#include <iostream>
#include "date.h"
using namespace std;

date::date() {};
void date :: displayDate() {
	cout << d << "/" << m << "/" << y << endl;
}