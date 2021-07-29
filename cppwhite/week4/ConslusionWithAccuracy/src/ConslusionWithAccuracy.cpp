//============================================================================
// Name        : ConslusionWithAccuracy.cpp
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
		double line;
		cout <<fixed<<setprecision(3);
		while (input >> line)
		{
			cout << line << endl;
		}

	return 0;
}
