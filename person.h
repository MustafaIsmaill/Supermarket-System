#ifndef PERSON_H_
#define PERSON_H_

#include <string.h>
#include <iostream>
using namespace std;

class Person {
public:
	Person(string);
	virtual void printInfo() = 0;

protected:
	string name;
};

#endif /* PERSON_H_ */
