//============================================================================
// Name        : divisionAonB.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

int main() {

	int a,b;

	cin >> a >> b;

	if (a < 0 || a >1000000)
	{
		return 0;
	}
	if (b < 0 || b >1000000)
	{
		return 0;
	}
	if(b == 0)
	{
	cout << "Impossible";
	return 0;
	}

	cout << a/b;

	return 0;
}
