//============================================================================
// Name        : Factorial'.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

	int factorial (int a)
	{
		int result = 1;

		if(a<1)
		{
			return 1;
		}
	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}

	return result;

	}

int main() {




	return 0;
}
