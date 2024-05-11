#pragma once
#include <iostream>

class Pair {
private:
	int first;
	double second;
public:

	Pair();
	Pair(int first, double second);
	Pair(Pair& T);
	~Pair();

	double sub();
	void add(int thing);
	void add(double thing);

	void setFirst(int first);

	void setSecond(double second);

	int getFirst();

	double getSecond();

	void operator= (Pair& T);

	friend std::ostream& operator<<(std::ostream& out, const Pair& p);

	friend std::istream& operator>>(std::istream& in, Pair& p);
};