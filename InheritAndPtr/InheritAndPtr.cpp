// InheritAndPtr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Person* Kate = new Person("Kate", "Gregory", 456);
	Tweeter* KateGregcons = new Tweeter("Kate", "Gregory", 567, "@Gregory");
	//will use the GetName() of Person if method is non-virtual
	//will use the GetName() of Tweeter if method is virtual
	Person* pKateGregcons = KateGregcons;

	cout << Kate->GetName() << endl;
	cout << KateGregcons->GetName() << endl;
	//will print the GetName() of Person if non-virtual
	//will print the GetName() of Tweeter if virtual
	cout << pKateGregcons->GetName() << endl;

	delete KateGregcons;

    return 0;
}

