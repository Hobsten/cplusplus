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
	std::string GetName() const;

	//inline function
	//const to make it compile when this function 
	//is called on a const reference
	int GetNumber() const{ return arbitrarynumber; }
	//inline function
	void SetNumber(int number) { arbitrarynumber = number; }
	//overloading operators
	bool operator<(const Person& p) const;
	//overloading operators
	bool operator<(int i) const;
	//gives the free function access to the member variables
	//a free function can't have a const modifier 
	//because it doesn't have access to member variables
	friend bool operator<(int i, Person& p);
};
//overloading operator in free function 
bool operator<(int i, Person& p);
#endif

