#include <iostream>
#include "Pair.h"
using namespace std;



int main() {
	Pair item1, item2 = item1, item3(123, 456.1);
	cin >> item1;
	cout << endl << item1 << ", " << item2 << ", " << item3 << endl << endl;
	item3 = item1;
	item3.add(123);
	item3.add(456.1);
	item3.setFirst(54);
	item3.setSecond(543.23);
	cout << item3.getFirst() << ":" << item3.getSecond() << endl;

	return 0;
}
