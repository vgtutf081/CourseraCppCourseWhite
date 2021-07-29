//============================================================================
// Name        : BusStopsVol2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>
#include <vector>


bool theStopExist (string stop,const vector <vector <string>> & stops)
{
	for (unsigned int i = 0; i < stops.size(); i++)
	{
		for (auto s: stops[i])
		{
			if (s == stop)
			{
				return true;
			}
		}
	}
	return false;
}

bool theBusExist (string bus,const map <int, string> & buses)
{
	for (auto s: buses)
	{
		if (s.second == bus)
			return true;
	}

	return false;
}









int main() {

	map <int, string> buses;

	vector <vector <string>> stops;

	unsigned int q; //quanity of requests

	string request;

	int bus_count = 0;

	cin >> q;

	for (unsigned int i = 0; i < q; i++)
	{

		cin >> request;

		if (request == "NEW_BUS")
		{
			string bus;
			unsigned int stop_count;
			string stop;

			cin >> bus >> stop_count;

			buses[bus_count] = bus;

			for ( unsigned int j = 0; j < stop_count; j++)
			{
				cin >> stop;

				stops.resize(bus_count+1);

				stops[bus_count].push_back(stop);
			}
			bus_count++;
		}
		else if (request == "BUSES_FOR_STOP")
		{
			string stop;
			cin >> stop;

			if(theStopExist (stop,stops))
			{
				for (unsigned int j = 0; j < stops.size(); j++)
				{
					for (auto s: stops[j])
					{
						if(s == stop)
						{
							cout << buses[j] << " ";
						}
					}
				}
				cout << endl;
			}
			else
			{
				cout << "No stop" << endl;
			}
		}
		else if (request == "STOPS_FOR_BUS")
		{
			string bus;
			cin >> bus;

			unsigned int buses_quanity = 0;
			if (theBusExist (bus,buses))
			{
			for ( auto s : buses)
			{
				if(s.second == bus)
				{
					for(auto d : stops[s.first])
					{
						cout << "Stop " << d <<": ";
						for (unsigned int k = 0; k < stops.size(); k++)
						{
							for (auto a : stops[k])
							{
								if (d == a && bus != buses[k])
								{
									cout << buses[k] << " ";
									buses_quanity++;
								}
							}
						}

						if(buses_quanity == 0)
						cout << "no interchange";

						cout << endl;

						buses_quanity = 0;
					}
				}
			}


			}
			else
			{
			cout << "No bus" << endl;

			}

		}
		else if( request == "ALL_BUSES")
		{
			map <string, int> buses_in_alphabet;

			if (buses.size() == 0)
			{
			cout << "No buses" << endl;
			}
			else
			{
				for ( auto s : buses)
				{
					buses_in_alphabet[s.second] = s.first;
				}

				for (auto d : buses_in_alphabet)
				{
					cout << "Bus " << d.first << ": ";

					for (auto s: stops[d.second])
					{
						cout << s << " ";
					}
					cout << endl;
				}


			}

		}




















	}

















	return 0;
}
