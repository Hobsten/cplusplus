// RefAndPoint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Person.h"

using namespace std;


int main()
{
	int a = 3;
	cout << "a is " << a << endl;
	//declaring a pointer to point to 
	//the address of a
	int* pA = &a;
	//changes the value of the memory address
	//where a lies to 4
	*pA = 4;
	//a will now be 4
	cout << "a is " << a << endl;


	int b = 100;
	//sets the pointer to point to b instead
	pA = &b;
	//calls the ++operator on the value of
	//variable b by 1 to 101
	(*pA)++;
	//a is 4 and b is 101
	cout << "a " << a << ", *pA " << *pA << endl;
	
	Person Kate("Kate", "Gregory", 234);
	//pointer to the address of Kate
	Person* pKate = &Kate;
	(*pKate).SetNumber(235);

	cout << "Kate: " << Kate.GetName() << " " << Kate.GetNumber() << endl;
	cout << "pKate: " << pKate->GetName() << " " << pKate->GetNumber() << endl;


	//creates a reference to variable a.
	//if rA was passed as a reference to a function,
	//variable a would be changed outside the function aswell
	int& rA = a;
	//changes the value of a from 4 to 5 
	//because rA is now just an alias for a
	rA = 5;
	cout << "a is " << a << endl;


	//creates a reference to the object Kate
	Person& rKate = Kate;
	//changes the member variable to 345
	rKate.SetNumber(345);
	cout << "rKate: " << rKate.GetName() << " " << rKate.GetNumber() << endl;


	//a bad pointer that normally will crash the program
	//if there is no if
	int* badpointer = nullptr;
	if (badpointer)
	{
		*badpointer = 3;
		cout << *badpointer << endl;

	}

	//a reference cannot be declared without a value
	/*int& badreference;
	badreference = 3;
	cout << badreference << endl;*/


	const Person cKate = Kate;
	//doesnt work since cKate is a const
	//cKate.SetNumber(222);

	//this works only because GetNumber() has
	//been declared a const in the header file
	int KateNumber = cKate.GetNumber();

	int j = 1;
	int i = 55;
	const int ci = 65;

	int* pI = &i;
	//ci is a const so the pointer that points to it
	//has to be const aswell
	const int* pII = &ci;

	//a const int pointer pointing to the same place as 
	//pI, the address of i, which is not a const
	const int * pcI = pI;
	
	/*
	trying to change the value at this address
	through a pointer pointing to a const value
	wont work. However, you can change the value at 
	this address through i.
	*/
	//*pcI = 4;
	cout << "*pcI: " << *pcI << endl;
	i = 44;
	cout << "*pcI: " << *pcI << endl;

	//since the pointer itself isnt a const
	//it can be changed to point to something else
	pcI = &j;

	//a const pointer that can change value
	//but not point to anything else
	int* const cpI = pI;
	*cpI = 2;
	//cant point elsewhere
	//cpI = &j;

	//cant change value or point to anything else
	const int * const useless = pI;


    return 0;
}

