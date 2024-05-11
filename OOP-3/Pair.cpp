#include "Pair.h"
#include <iostream>

Pair::Pair() {
		this->first = 0;
		this->second = 0.0;
	}
Pair::Pair(int first, double second) {
		this->first = first;
		this->second = second;
	}
Pair::Pair(Pair& T) {
		this->first = T.first;
		this->second = T.second;
	}
Pair::~Pair() {
		std::cout << std::endl << "Pair " << this->first << " : " << this->second << " was deleted!";
	}

double Pair::sub() {
	return this->first - this->second;
}

void Pair::add(int thing) {
	this->first += thing;
}

void Pair::add(double thing) {
	this->second += thing;
}

void Pair::setFirst(int first) {
	this->first = first;
}

void Pair::setSecond(double second) {
	this->second = second;
}

int Pair::getFirst() {
	return this->first;
}

double Pair::getSecond() {
	return this->second;
}

void Pair::operator= (Pair& T) {
	this->first = T.first;
	this->second = T.second;
}


std::ostream& operator<<(std::ostream& out, const Pair& p) { // Функции перегрузки << и >> дружественные, поскольку они используют внешние типы
	return(out << p.first << " : " << p.second);
}

std::istream& operator>>(std::istream& in, Pair& p) {
	std::cout << "first: ";
	in >> p.first;
	std::cout << "second: ";
	in >> p.second;
	return in;
}

