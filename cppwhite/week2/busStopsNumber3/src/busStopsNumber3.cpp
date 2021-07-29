//============================================================================
// Name        : busStopsNumber3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <set>

bool setAlreadyExist (const set <string> & temp, const map <set <string>, int> & v)
{
	for (auto & s: v)
	{
		if (s.first == temp)
		{
			return true;
		}
	}
	return false;
}


int main() {

	map <set <string>, int> v;

	unsigned int q;
	cin >> q;
	unsigned int stops_numbers = 1;

	for (unsigned int i = 0; i < q; i++)
	{
		unsigned int stops_quanity;
		cin >> stops_quanity;

		set <string> temp;

		for (unsigned int j = 0; j < stops_quanity; j++)
		{
			string temp_string;
			cin >> temp_string;

			temp.insert(temp_string);
		}

		if (setAlreadyExist (temp,v))
		{
			cout << "Already exists for " << v[temp] << endl;
		}
		else
		{
			v[temp] = stops_numbers;
			cout << "New bus " << stops_numbers << endl;
			stops_numbers++;
		}












	}





	return 0;
}
