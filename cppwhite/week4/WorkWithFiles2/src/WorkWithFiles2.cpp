//============================================================================
// Name        : WorkWithFiles2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <fstream>


int main() {

	ifstream input ("input.txt");
	string line;

	ofstream output ("output.txt");


	while (getline (input,line))
	{
		output << line << endl;
	}



	return 0;
}
