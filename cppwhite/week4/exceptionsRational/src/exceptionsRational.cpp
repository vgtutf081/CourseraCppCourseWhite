//============================================================================
// Name        : exceptionsRational.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Rational {
public:
  Rational();
  Rational(int numerator, int denominator)
  {
  if (denominator == 0)
      	{
      		throw invalid_argument("invalid_argument");
      	}
  }

  int Numerator() const;
  int Denominator() const;
};

Rational operator / (const Rational& lhs, const Rational& rhs)
				{
					if(rhs.Numerator() * lhs.Denominator() == 0)
					{
						throw domain_error("domain_error");
					}

				return {lhs.Numerator() * rhs.Denominator(), rhs.Numerator() * lhs.Denominator()};

				}

int main() {
    try {
        Rational r(1, 0);
        cout << "Doesn't throw in case of zero denominator" << endl;
        return 1;
    } catch (invalid_argument&) {
    }

    try {
        auto x = Rational(1, 2) / Rational(0, 1);
        cout << "Doesn't throw in case of division by zero" << endl;
        return 2;
    } catch (domain_error&) {
    }

    cout << "OK" << endl;
    return 0;
}
