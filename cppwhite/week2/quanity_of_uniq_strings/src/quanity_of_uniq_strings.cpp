//============================================================================
// Name        : quanity_of_uniq_strings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <set>
#include <vector>

int main() {

	unsigned int q;

	cin >> q;

	string word;

	set <string> words;


	for (unsigned int i = 0; i < q; i++)
	{

		cin >> word;

		words.insert(word);

	}

	cout << words.size();


	return 0;
}
