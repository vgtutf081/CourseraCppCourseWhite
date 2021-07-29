//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>
#include <set>
#include <iomanip>


int main() {

	string s = "Add 1-2-3 ";

	string a;

	int z;

	 stringstream input(s);

	 input >> a;

	 input >> z;
	 input.ignore(1);
	 input >> z;
	 input.ignore(1);
	 input >> z;

	 input >> a;

	 cout << a;




	return 0;
}
