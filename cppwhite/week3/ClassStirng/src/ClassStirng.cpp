//============================================================================
// Name        : ClassStirng.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <algorithm>
#include <map>
#include <vector>
#include <string>


	class ReversibleString {

	public:
		ReversibleString(){};
		ReversibleString(const string& _String){

			revString = _String;
		};

		void Reverse (void)
		{
			reverse(begin(revString), end(revString));
		}

		string ToString (void) const
		{
			return revString;
		}


	private:
		string revString;

};



int main() {
  ReversibleString s("live");
  s.Reverse();
  cout << s.ToString() << endl;

  s.Reverse();
  const ReversibleString& s_ref = s;
  string tmp = s_ref.ToString();
  cout << tmp << endl;

  ReversibleString empty;
  cout << '"' << empty.ToString() << '"' << endl;

  return 0;
}
