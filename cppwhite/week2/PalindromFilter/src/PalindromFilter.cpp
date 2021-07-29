

#include <iostream>
using namespace std;
#include <string>
#include <vector>

bool IsPalindrom(string palindrom) {

    for (int i = 0; i < palindrom.size() / 2; ++i) {

        if (palindrom[i] != palindrom[palindrom.size() - i - 1]) {

            return false;
        }
    }

    return true;
}

vector<string> PalindromFilter (vector<string> words, int minLength)
{

	vector<string> a;
	for (auto  s  : words)
	{
		if(IsPalindrom(s) && s.size() >= minLength)
		{
			a.push_back(s);

		}
	}
	return a;

}

