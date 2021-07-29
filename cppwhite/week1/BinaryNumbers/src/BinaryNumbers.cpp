//============================================================================
// Name        : BinaryNumbers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;


int main() {

	long int number;
	long int maxDivider;
	long int j = 0;

	vector <int> v;

	cin >> number;

	if (number == 0)
	{
		cout << 0;
		return 0;
	}

	for (long int i = 1; i <= number; i*=2)
	{
		maxDivider = i;
		j++;

	}

	for (j ; j > 0; j--)
	{
	if(number/maxDivider)
	{
		cout << 1;

		number = number % maxDivider;

	}
	else
	{
		cout << 0;

	}
	maxDivider = maxDivider / 2;
	}


	return 0;
}
