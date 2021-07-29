//============================================================================
// Name        : BusStops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>
#include <vector>

bool stop_exist (string stop_bus, const vector<vector<string>> & bus_stops)
{
	for (unsigned int k = 0; k < bus_stops.size(); k++)
	{
		for (auto a : bus_stops[k])
		{
			if(a == stop_bus)
				return true;
		}
	}
	return false;
}

int bus_number (string bus_number,map <int, string> buses)
{
	for (auto a : buses)
	{
		if (a.second == bus_number)
		{
			return a.first;
		}
	}
}

void print_buses_for_stop (string bus_stop, vector<vector<string>> bus_stops, map <int, string> buses)
{
	for (unsigned int k = 0; k < bus_stops.size(); k++)
		{
			for (auto a : bus_stops[k])
			{
				if(a == bus_stop)
				{
					cout << buses[k] << " ";
				}
			}
		}

}






int main() {

	unsigned int q;

	cin >> q;

	string request;

	int buscount = 0;

	map <int, string> buses;

	vector<vector<string>> bus_stops;



	for (unsigned int i = 0; i < q; i++)
	{

		cin >> request;

		if (request == "NEW_BUS")
		{
			string busnumber;
			unsigned int stop_count;

			cin >> busnumber;

			buses[buscount] = busnumber;



			cin >> stop_count;

			for (unsigned int j = 0; j < stop_count; j ++)
			{
				string bus_stop;
				cin >> bus_stop;

				bus_stops[buscount].push_back(bus_stop);

			}
			buscount++;

		}
		else if(request == "BUSES_FOR_STOP")
		{
			string bus_stop;
			cin >> bus_stop;

			if (stop_exist(bus_stop, bus_stops))
			{
				print_buses_for_stop (bus_stop, bus_stops, buses);
			}
			else
			{
				cout << "No stop" << endl;
			}






		}
		else if(request == "STOPS_FOR_BUS")
		{
			string bus;
			cin >> bus;

			for (unsigned int p = 0; p < bus_stops[bus_number (bus, buses)].size(); p++)
			{
				cout << "Stop " << bus_stops[bus_number (bus, buses)][p] << ":";

				print_buses_for_stop (bus_stops[bus_number (bus, buses)][p], bus_stops, buses);
			}
		}






	}


	return 0;
}
