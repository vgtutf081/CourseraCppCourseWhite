//============================================================================
// Name        : SecondEntry.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>


int main() {

	string line;

	int j = 0;
	int i = 0;

	cin >> line;

	for (char c : line)
	{

		if(c == 'f')
		{
			j++;
			if(j == 2)
			{
			cout << i;
			return 0;
			}
		}
		i++;
	}


	if(j == 1)
	{
		cout << "-1";
		return 0;
	}
	cout << "-2";


	return 0;
}
