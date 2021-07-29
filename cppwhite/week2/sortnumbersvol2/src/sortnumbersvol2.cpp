//============================================================================
// Name        : sortnumbersvol2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <cmath>

#include <algorithm>


int main() {

	int q;
	cin >> q;

	vector <int> v;

	for (int i = 0; i < q; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(begin(v),end(v),[](const int & x,const  int & y){
			return (abs(x) < abs(y));
	});

	for (int s: v)
	{
		cout << s << " ";
	}



	return 0;
}
