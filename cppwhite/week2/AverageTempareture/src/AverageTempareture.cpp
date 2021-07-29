
#include <iostream>
using namespace std;
#include <vector>

	void  AverageTemperature (void)
	{

	unsigned int days;

	unsigned int AvT;

	unsigned int count = 0;

	unsigned int k = 0;

	cin >> days;

	vector<int> t(days);

	for (unsigned int i = 0, j; i < days; i++)
	{
		cin >> j;
		t[i] = j;

		count += j;
	}

	AvT = count / days;


	for (unsigned int i = 0; i < days; i++)
	{

		if(t[i] > AvT)
		{
		k++;
		}
	}

	cout << k << endl;

	for (unsigned int i = 0; i < days; i++)
		{

			if(t[i] > AvT)
			{
			cout << i << " ";
			}
		}

	}

int main() {


	AverageTemperature();




	return 0;
}
