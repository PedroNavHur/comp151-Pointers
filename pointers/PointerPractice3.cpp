// dynamic arrays

#include <iostream>
#include  <string>

using namespace std;

// Heap
// place of ram

int main() {
	//int i, n;
	//int *p;

	//cout << "Array size?";
	//cin >> i;

	//p = new (nothrow) int[i];

	int classCount;
	cout << "How many class members today? ";
	cin >> classCount;
	cin.ignore();

	string *Names = new string[classCount];



	// populate array data
	for (size_t i = 0; i < classCount; i++) {
		cout << "Enter name " << i + 1 << ": ";
		getline(cin, Names[i]);
	}


	// outpout aray data
	cout << "\n\nMembers of the class:\n";
	for (size_t i = 0; i < classCount; i++) {
		cout << *(Names + i) << endl;
	}

	delete[] Names;

}