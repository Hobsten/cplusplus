// Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main_temp()
{
	//string to console output
	// '::' is the scope resolution operator
	/*std::cout << "Type your name" << std::endl;

	// declares a variable name as a string
	std::string name;

	//console input into name
	std::cin >> name;

	std::cout << "Hello, " << name << std::endl;
	*/

	//puts a long into int one. works because the long is small enough
	int one = 1L;
	std::cout << "one=" << one << std::endl;
	int two;
	two = 2;
	std::cout << "two=" << two << std::endl;
	int three(3);
	std::cout << "three=" << three << std::endl;

	double d1 = 2.2;
	double d2(two);
	std::cout << "d1=" << d1 << std::endl;
	std::cout << "d2=" << d2 << std::endl;

	int dint = (int) d1;
	std::cout << "dint=" << dint << std::endl;

	// char uses single quotes
	char ch = 'a';
	std::cout << "ch=" << ch << std::endl;

	// 0 is false, everything else is true
	bool flag = false;
	std::cout << "flag=" << flag << std::endl;
	flag = (bool) two;
	std::cout << "flag=" << flag << std::endl;
	flag = (bool) d1;
	std::cout << "flag=" << flag << std::endl;

	/*
	//8 bytes of number
	unsigned char num1 = 128;
	//7 bytes of number, 1 byte for +/-
	char num2 = 128;
	std::cout << "num1=" << num1 << std::endl;
	std::cout << "num2=" << num2 << std::endl;
	num1 = 254;
	num2 = 254;
	std::cout << "num1=" << num1 << std::endl;
	std::cout << "num2=" << num2 << std::endl;
	num1 = 300;
	num2 = 300;
	std::cout << "num1=" << num1 << std::endl;
	std::cout << "num2=" << num2 << std::endl;
	*/





	// the program is done when it returns from main
	// 0 means success
	return 0;
}

