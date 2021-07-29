//============================================================================
// Name        : Synonyms.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <set>
#include <vector>
#include <map>



int main() {

	unsigned int q; //quanity of operations

	cin >> q;

	map <string, set<string>> m;




	for (unsigned int i = 0; i < q; i++)
	{

		string request;
		cin >> request;



		if (request == "ADD")
		{
			string word1, word2;
			cin  >> word1 >> word2;



			m[word1].insert(word2);

			m[word2].insert(word1);
		}

		else if(request == "COUNT")
		{
			string word;
			cin >> word;


			cout << m[word].size() << endl;

		}
		else if(request == "CHECK")
		{
			string word1, word2;
			cin >> word1 >> word2;

			if (m[word1].count(word2) || m[word2].count(word1))
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}

		}








	}







	return 0;
}
