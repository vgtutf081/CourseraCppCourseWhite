

#include <iostream>
using namespace std;
#include <string>
#include <vector>

void MoveStrings (vector<string>& source, vector<string>& destination)
{
	for (unsigned int i = 0; i < source.size(); i++)
	{
		destination.push_back(source[i]);

	}
	source.clear();

}

int main() {

	vector<string> source = {"a", "b", "c"};
	vector<string> destination = {"z"};

	MoveStrings(source, destination);

	cout << source[0] << source[1] << source[2] << endl;

	cout << destination[0] << destination[1] << destination[2] << destination[3] << endl;

	return 0;
}
