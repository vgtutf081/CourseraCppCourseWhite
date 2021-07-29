//============================================================================
// Name        : SortNumbersByModule.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>


bool iss (int x,int y)
{
if (x < 0)
		{
		 return ((x*-1) > y);
		}
	else
		{
		return (x > y);
		}
}


int main() {

	unsigned int n;

	cin >> n;

	vector <int> v;

	for (int i; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(begin (v), end (v));


	for (int s: v)
	{
		cout << s << " ";
	}





	return 0;
}
