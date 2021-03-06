// Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	//j becomes the old value 1 because the incrementation happen after in contrast to ++i
	int j = i++;
	cout << "i=" << i << " j=" << j << endl;

	//j becomes the new value i because the incrementation happens before it gets assigned to j
	j = ++i;
	cout << "i=" << i << " j=" << j << endl;

	//not same
	j = i--;
	cout << "i=" << i << " j=" << j << endl;

	//same
	j = --i;
	cout << "i=" << i << " j=" << j << endl;

	cout << "-------------------------------------------------------------" << endl;

	//skips
	if (i == 2)
		cout << "i is 2" << endl;

	cout << "i=" << i << endl;

	//assigns and prints
	if (i = 3)
		cout << "i is 3" << endl;
	cout << "i=" << i << endl;

	i = 4;
	//skips
	if (3 == i)
		cout << "i is 3" << endl;
	cout << "i=" << i << endl;


	//bitwise operators
	int g = 4;
	int h = 1;
	if (g & h)
		cout << "g & h" << endl;
	
	g = 3;
	if (g & h)
		cout << "g="<< g << " h=" << h << " ..g & h" << endl;
	if (g | h)
		cout << "g=" << g << " h=" << h << " ..g | h" << endl;
	g = 1;
	if (g & h)
		cout << "g=" << g << " h=" << h << " ..g & h" << endl;
	g = 8;
	h = 8;
	if (g & h)
		cout << "g=" << g << " h=" << h << " ..g & h" << endl;

	cout << endl;
	cout << "bitshifting" << endl;
	int p = 4 >> 1;
	int o = 4 << 1;
	cout << "4 >> 1 is " << p << endl;
	cout << "4 << 1 is " << o << endl;
	p = 4 >> 2;
	o = 4 << 2;
	cout << "4 >> 2 is " << p << endl;
	cout << "4 << 2 is " << o << endl;

    return 0;
}

