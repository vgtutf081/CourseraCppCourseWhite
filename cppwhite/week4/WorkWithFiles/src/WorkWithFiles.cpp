//============================================================================
// Name        : WorkWithFiles.cpp
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
	while (getline (input,line))
	{
		cout << line << endl;
	}


	return 0;
}
