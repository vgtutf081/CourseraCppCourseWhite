//============================================================================
// Name        : Reversed.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <vector>

vector<int> Reversed(const vector<int>& v)
{
		vector<int> b;
		for (int i = v.size() - 1; i >= 0; i--)
		{
			b.push_back(v[i]);
		}
		return b;

}

int main() {



	return 0;
}
