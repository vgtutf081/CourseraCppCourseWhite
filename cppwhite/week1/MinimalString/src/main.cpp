//============================================================================
// Name        : MinimalString.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> a = { "","" ,"" };

	cin >> a[0] >> a[1] >> a[2];

	for (auto i : a)
	{
		if(i <= a[1] && i <= a[2] && i <= a[0])
		{
		cout << i;
		return 0;
		}
	}
	return 0;
}
