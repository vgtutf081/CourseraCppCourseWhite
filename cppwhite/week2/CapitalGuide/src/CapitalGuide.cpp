//============================================================================
// Name        : CapitalGuide.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>


bool countryExist (string s , const map <string, string>& m)
{
	for (auto b : m)
	{
		if (b.first == s)
			return true;
	}
	return false;
}


int main() {

	unsigned int q;

	cin >> q;

	map <string, string> CapitalGuide;



	for(int i = 0; i < q; i++)
	{
		string request , country, new_capital, old_country_name, new_country_name;



		cin >> request;

		if (request == "CHANGE_CAPITAL")
		{
			cin >> country >> new_capital;

				if (countryExist(country,CapitalGuide))
				{
					if(CapitalGuide[country] == new_capital)
					{
						cout << "Country " << country << " hasn't changed its capital" << endl;
					}
					else
					{
					cout << "Country " << country << " has changed its capital from " << CapitalGuide[country] << " to " << new_capital << endl;
					CapitalGuide[country] = new_capital;
					}
				}
				else
				{
				cout << "Introduce new country " << country << " with capital " << new_capital << endl;
				CapitalGuide[country] = new_capital;
				}

		}
		else if (request == "RENAME")
		{
			cin >> old_country_name >> new_country_name;

			if((old_country_name == new_country_name) || (!countryExist(old_country_name,CapitalGuide)) || countryExist(new_country_name,CapitalGuide))
			{
				cout << "Incorrect rename, skip" << endl;
			}
			else
			{
				cout << "Country " << old_country_name << " with capital " << CapitalGuide[old_country_name] << " has been renamed to " << new_country_name << endl;
				CapitalGuide[new_country_name] = CapitalGuide[old_country_name];
				CapitalGuide.erase(old_country_name);

			}
		}

		else if (request == "ABOUT")
		{
			cin >> country;

			if (!countryExist(country,CapitalGuide))
			{
				cout << "Country " << country <<" doesn't exist" << endl;

			}
			else
			{
				cout << "Country " << country  << " has capital " << CapitalGuide[country] << endl;
			}

		}
		else
		{
			if (CapitalGuide.size() == 0)
			{
				cout << "There are no countries in the world" << endl;
			}
			else
			{
				for( auto p : CapitalGuide)
				{
					cout << p.first << "/" << p.second << " ";
				}
				cout << endl;
			}
		}






































	}


	return 0;
}
