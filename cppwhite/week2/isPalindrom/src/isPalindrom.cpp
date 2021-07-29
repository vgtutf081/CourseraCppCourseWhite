
#include <iostream>
using namespace std;
#include <string>

bool IsPalindrom (string palindrom)
{
	if(palindrom[0] == '\0')
	{
		return true;
	}



	string a;
	unsigned int k = 0;

	for (int i = (palindrom.length()-1), j = 0; i >= 0;j++, i--)
	{

		a[i] = palindrom[j];

	}

	for (long long unsigned int i = 0; i < palindrom.length(); i++)
	{
		if(a[i] == palindrom[i])
		{
			k++;
		}
	}
	if(k == palindrom.length())
	{
	return true;
	}
	else
	{
	return false;
	}
}

int main() {

	cout << IsPalindrom(" ");

	return 0;
}
