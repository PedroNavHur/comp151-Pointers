// Practice Programming pointers
// @author: Pedro J. Navarrete

#include <iostream>
using namespace std;

void main() {

	//declare two pointers variables
	int *pint1;
	char *pchar2;

	// delcare two regular variables
	int int1 = 500;
	char char2 = 'X';

	// write a statement that will point pint1 to the value 500
	pint1 = &int1;
	// write a statement that willpoint pchar2 to the value of X
	pchar2 = &char2;


	cout << *pint1 << " | " << pint1 << " = " << &int1 <<  endl;
	cout << *pchar2 << " | " << pchar2 << " = " << &char2 << endl;

	// store a new value on top of 500
	//cout << "Insert a new Number ";
	//cin >> *pint1;
	//cout << *pint1 << endl;
	
	*pint1 = 250;
	cout << int1 << endl;
	cout << *pint1 << endl;


}