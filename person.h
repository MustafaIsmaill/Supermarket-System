#ifndef PERSON_H_
#define PERSON_H_

#include <string.h>
#include <iostream>
using namespace std;

class Person {
public:
	Person();
	virtual ~Person();
	Person(string);
	void setName(string);
	inline string getName() { return name; }
	void printInfo();

protected:
	string name;
};

#endif /* PERSON_H_ */
