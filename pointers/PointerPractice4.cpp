// Swap two pieces of data via pointer

#include <iostream>

using namespace std;

void Swap(int *, int *);

void main() {
	int value1 = 25;
	int value2 = 42;

	
	
	cout << "before... " << value1 << " " << value2 << endl;
	Swap(&value1, &value2);

	cout << "before... " << value1 << " " << value2 << endl;
}

void Swap(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}