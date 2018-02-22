#pragma once


template <class T>
class Accum
{
private:
	//return sum
	T total;
public:
	//start value
	Accum(T start) : total(start) {};
	//const T& t, so that we can pass literals by reference
	//adds t to the total
	T operator+=(const T& t) { return total = total + t;};
	T GetTotal() { return total; };
};


//a template specialization for Person
template <>
class Accum<Person>
{
private:
	//return sum
	int total;
public:
	//start value
	Accum(int start) : total(start) {};
	//no need for const here since Person is not a literal
	int operator+=(Person& t) { return total = total + t.GetNumber(); };
	int GetTotal() { return total; };
};