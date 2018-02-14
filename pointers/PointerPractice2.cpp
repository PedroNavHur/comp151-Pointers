// POinter Practice #2

#include <iostream>
using namespace std;

void main() {

	//int val1, val2;

	//val1 = 10;
	//val2 = 20;

	//int *pval1 = &val1;
	//cout << val1 << endl; // 10
	//cout << pval1 << endl; // address of val1
	//cout << &val1 << endl; // address of val1
	//cout << *(pval1 + 1) << endl; // the value of the address of val1

	//cout << endl << *(&val1) << endl;

	const int size = 5;

	int array[size] = { 5,10,15 };

	//cout << array << endl;
	//cout << array[0] << endl;

	//cout << *array << endl;

	//cout << array[2] << endl;
	//cout << *array + 2 << endl;

	//// array is a constant pointer
	//int *arrayCopy = array;
	//arrayCopy++;
	//cout << *(arrayCopy+1) << endl;
	//cout << array[1] << endl;

	for (int *arrayCopy = array; *arrayCopy != -1; arrayCopy++) {
		cout << *arrayCopy << endl;
	}


}