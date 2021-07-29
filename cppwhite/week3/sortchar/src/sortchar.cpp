//============================================================================
// Name        : sortchar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <ctype.h>


int main() {

	unsigned int q;
	cin >> q;




	vector <string> v;

	for (unsigned int i = 0; i < q; i++)
	{	string c;
		cin >>c;
		v.push_back(c);
	}

	sort(begin(v), end(v), [](string x,string y){

		string x1,y1;

		for (char s: x)
			{
			x1.push_back(tolower(s));

			}
		for (char p : y)
			{
			y1.push_back(tolower(p));
			}
		return x1 < y1;
	});

	for (auto s: v)
	{
		cout << s << " ";
	}

	return 0;
}
