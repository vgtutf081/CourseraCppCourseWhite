//============================================================================
// Name        : CalculationOftheCostofGoods.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double n, a, b, x, y;

	cin >> n >> a >> b >> x >> y;

	if (n > b)
	{
		cout << n - ((n / 100)*y);
	}
	else if (n > a)
	{
		cout << n - ((n / 100)*x);
	}
	else
	{
		cout << n;
	}

	return 0;
}
