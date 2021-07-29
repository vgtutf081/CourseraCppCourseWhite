

#include <iostream>
using namespace std;
#include <string>
#include <vector>


	void Reverse(vector<int>& v)
	{


		vector<int> b;
		for (int i = v.size() - 1; i >= 0; i--)
		{
			b.push_back(v[i]);
		}
		v = b;

	}

int main() {

	vector<int> numbers = {1};

	Reverse(numbers);

	cout << numbers[0] << numbers[1] << numbers[2] << numbers[3] << numbers[4];

	return 0;
}
