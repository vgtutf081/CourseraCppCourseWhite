//============================================================================
// Name        : ReadandOutputTable.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>
#include <vector>



int main() {


	ifstream input ("input.txt");
	int a;
	int b;

	input >> a;
	input >> b;

	for (unsigned int i = 0; i < a; i++)
	{
		for (unsigned int j = 0; j < b; j++)
		{
			int y;
			input >> y;
			input.ignore(1);
			cout << setw(10) <<y;
			if (j != b-1)
			{
				cout << " ";
			}
		}
		if (i != a - 1)
		{
			cout << endl;
		}
	}

	return 0;
}


