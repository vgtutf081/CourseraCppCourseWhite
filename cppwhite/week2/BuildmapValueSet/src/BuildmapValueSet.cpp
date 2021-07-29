//============================================================================
// Name        : BuildmapValueSet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>
#include <set>


set<string> BuildMapValuesSet(const map<int, string>& m) {

	set <string> s;

	for (auto a : m)
	{
		s.insert(a.second);
	}

	return s;

}



int main() {




	set<string> values = BuildMapValuesSet({
	    {1, "odd"},
	    {2, "even"},
	    {3, "odd"},
	    {4, "even"},
	    {5, "odd"}
	});

	for (const string& value : values) {
	  cout << value << endl;
	}



	return 0;
}
