//============================================================================
// Name        : EveryMounthTasks.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>

int main() {

	vector <vector <string>> Mounth (31);

	vector <vector <string>> temp;

	unsigned int day;

	string task;

	vector <int> daysInMounth = {31, 28 ,31 ,30 ,31 ,30, 31, 31, 30, 31, 30 ,31};

	unsigned int n = 0; // daysInMounth index

	string operation;

	unsigned int OperationsQuantity;



	cin >> OperationsQuantity;

	for (unsigned int i = 0; i < OperationsQuantity; i++)
	{


		cin >> operation;

		if(operation == "NEXT")
		{
			n ++;
			if (n == 12)
			{
			n = 0;
			}
			else if (daysInMounth[n] < daysInMounth[n-1])
			{

			for (int j = daysInMounth[n]; j < daysInMounth[n-1]; j++)
			{
			Mounth[daysInMounth[n]-1].insert(end(Mounth[daysInMounth[n]-1]), begin(Mounth[j]) , end(Mounth[j]));
			}
			/*for (int j = daysInMounth[n]; j < daysInMounth[n-1]; j++)
			{
			Mounth[daysInMounth[n] - 1].push_back(Mounth[j][0]);
			}*/
			Mounth.resize(Mounth.size() - (daysInMounth[n-1] - daysInMounth[n]));
			}
			else
			{
			Mounth.resize(daysInMounth[n]);
			}

		}

		else if(operation == "ADD")
		{
			cin >> day >> task;
			Mounth[day-1].push_back(task);
		}
		else
		{
			cin >> day;
			int k = 0;
			for (auto s : Mounth[day-1])
						{
							if(s.size() > 0)
							{k++;}
						}
			cout << k << " ";
			for (auto s : Mounth[day-1])
			{

					cout << s << " ";

			}
			cout << endl;
		}



	}








	return 0;
}
