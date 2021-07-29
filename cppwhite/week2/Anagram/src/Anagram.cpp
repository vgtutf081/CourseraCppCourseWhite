//============================================================================
// Name        : Anagram.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>
#include <vector>

	void BuildCharCounters (string s,map <char, int>& counters)
	{
		for (unsigned int j = 0; j < s.size(); j++)
			{
				++counters[s[j]];
			}
	}



int main() {

	unsigned int numberOfStrings;

	cin >> numberOfStrings;

	vector <string> s(2);

	map<char, int> counters1;

	map<char, int> counters2;

	for(unsigned int i = 0; i < numberOfStrings; i++)
	{
		cin >> s[0] >> s[1];

		BuildCharCounters (s[0], counters1);

		BuildCharCounters (s[1], counters2);

		if (counters1 == counters2)
		cout << "YES" << endl;
		else
		cout << "NO" << endl;

		counters2.clear();
		counters1.clear();


	}







	return 0;
}
