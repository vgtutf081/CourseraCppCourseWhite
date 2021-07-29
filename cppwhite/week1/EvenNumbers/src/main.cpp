//============================================================================
// Name        : EvenNumbers.cpp
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

	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
		cout << i <<" ";
		}
	}

	return 0;
}
