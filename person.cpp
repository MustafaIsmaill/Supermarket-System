#include "person.h"
#include <string>
using namespace std;

Person::Person() {
	name = "???";
}

Person::~Person() {
}

Person::Person(std::string n)
{
	name = n;
}

void Person::setName(std::string n)
{
	name = n;
}

void Person::printInfo()
{
	cout << "Name is: " << name << endl;
}
