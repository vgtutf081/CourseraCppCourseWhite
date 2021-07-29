//============================================================================
// Name        : BusStopsNumber2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <map>

bool RoutelreadyExist (vector<string> stops,const map <vector <string>, int> & route)
{
	for (auto s: route)
	{
		if (s.first == stops)
		return true;
	}
	return false;
}

int main() {

	map <vector <string>, int> route;

	int q; // quantity of operations
	cin >> q;

	int n = 1; //number of routes

	for (int i = 0; i < q; i ++)
	{
		int stops_quantity;
		cin >> stops_quantity;

		vector<string> stops;

		string stop;

		for (int j = 0; j < stops_quantity; j++)
		{
			cin >> stop;
			stops.push_back(stop);

		}

		if (RoutelreadyExist (stops,route))
		{
			cout << "Already exists for " << route[stops] << endl;
		}
		else
		{
		route[stops] = n;
		cout << "New bus " << n << endl;
		n++;
		}

	}


	return 0;
}
