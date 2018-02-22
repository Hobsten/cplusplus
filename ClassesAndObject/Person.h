#include <string>
#ifndef _Person_H
#define _Person_H

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
public:
	Person(std::string first, std::string last, int arbitrary);
	~Person();
	std::string GetName();

	//inline function
	int GetNumber() { return arbitrarynumber; }
	//inline function
	void SetNumber(int number) { arbitrarynumber = number; }
	//overloading operators
	bool operator<(Person& p);
	//overloading operators
	bool operator<(int i);
	//gives the free function access to the member variables
	friend bool operator<(int i, Person& p);
};
//overloading operator in free function
bool operator<(int i, Person& p);
#endif

