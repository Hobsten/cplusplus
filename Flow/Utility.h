#pragma once


bool IsPrime(int x);


//& means passing by reference instead of value
bool Is2MorePrime(int& x);

/*
//dangling reference, dont use 
int& BadFunction()
{
	int a = 3;
	return a;
}
*/