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

int main() {


	map <string ,set <string>> s;

	string abc = "ss";

	s[abc].insert("ads");

	cout << s[abc].size();


	return 0;
}
