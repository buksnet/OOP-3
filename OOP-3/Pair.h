#pragma once
#include <iostream>

class Base {
protected:
	int first;
	double second;
public:
	virtual double sub() = 0;
	virtual void add(int) = 0;
	virtual void add(double) = 0;

	virtual void setFirst(int) = 0;
	virtual void setSecond(double) = 0;

	virtual int getFirst() = 0;
	virtual double getSecond() = 0;
};

class Pair: public Base {
public:

	Pair();
	Pair(int first, double second);
	Pair(Pair& T);
	~Pair();

	double sub() override;
	void add(int thing) override;
	void add(double thing) override;

	void setFirst(int first) override;

	void setSecond(double second) override;

	int getFirst() override;

	double getSecond() override;

	void operator= (Pair& T);

	friend std::ostream& operator<<(std::ostream& out, const Pair& p);

	friend std::istream& operator>>(std::istream& in, Pair& p);
};