//============================================================================
// Name        : queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <vector>









int main() {


	unsigned int k; // количество операций

	cin >> k;

	int people; //кол-во человек

	int	number; // номер человека

	string operation; // действие человека в очереди

	unsigned int isWorry = 0; // кол-во беспок людей

	cin >> operation;

	if(operation == "WORRY_COUNT")
	{
		cout << 0 << endl;
		cin >> operation >> people;
		k--;
	}
	else
	{
		cin >> people;
	}

	vector <bool> queue(people, false); //очередь

	for (unsigned int i = 1; i < k; i++)
	{

		cin >> operation;

		if(!(operation == "WORRY_COUNT"))
		{
			cin >> number;
		}

		if (operation == "WORRY")
		{
			queue[number] = true;
		}
		else if (operation == "COME")
		{
			if(number > 0)
			queue.resize(number+queue.size(),false);
			if(number < 0)
			for(int l = 0; l > number; l--)
			{
				queue.pop_back();
			}
		}

		else if (operation == "QUIET")
		{
			queue[number] = 0;
		}

		else if (operation == "WORRY_COUNT")
		{
			for(auto s : queue)
			{
				if(s)
				isWorry++;
			}
			cout <<isWorry << endl;
			isWorry = 0;
		}


	}









	return 0;
}
