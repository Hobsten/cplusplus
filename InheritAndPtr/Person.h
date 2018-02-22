#pragma once
#include <string>
#ifndef _Person_H
#define _Person_H

class Person {
private:
	std::string firstname;
	std::string lastname;
	int num;

public:
	Person(std::string first, std::string last, int n);
	~Person();
	virtual std::string GetName() const;
	void SetFirstName(std::string first) { firstname = first; }
	int GetNum() { return num; }
	void SetNum(int n) { num = n; }


};


#endif
