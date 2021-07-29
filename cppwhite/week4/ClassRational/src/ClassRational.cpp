//============================================================================
// Name        : ClassRational.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
#include <set>
#include <vector>
#include <stdexcept>



class Rational {
public:
    Rational() {
        // Реализуйте конструктор по умолчанию
    	new_numerator = 0;
    	new_denominator = 1;
    }

    Rational(int numerator, int denominator) {
        // Реализуйте конструктор
    	bool isNegative = false;

    	if (denominator == 0)
    	{
    		throw invalid_argument("Invalid argument");
    	}

    	if (numerator == 0)
    	{
    		new_numerator = 0;
			new_denominator = 1;
    	}
    	else
		{
    		if (numerator < 0 || denominator < 0)
    		{
    		if(numerator < 0 && denominator < 0)
    		{
    			isNegative = false;
    		}
    		else
    		{
    			isNegative = true;
    		}
    		}

    		numerator = abs(numerator);
			denominator = abs(denominator);

			new_numerator = numerator;
			new_denominator = denominator;



			while (numerator != 0 && denominator != 0)
			    if (numerator > denominator)
			    	numerator = numerator % denominator;
			    else
				denominator = denominator % numerator;

			new_numerator /= numerator + denominator;
			new_denominator /= numerator + denominator;

			if(isNegative)
				new_numerator *= -1;

		}

    }

    int Numerator() const {
    	return new_numerator;
        // Реализуйте этот метод
    }

    int Denominator() const {
    	return new_denominator;
        // Реализуйте этот метод
    }

    void setNumerator (int newnumerator)
	{
    	new_numerator = newnumerator;
	}

    void setDenominator (int newdenominator)
    	{
    	new_denominator = newdenominator;
    	}

private:

    int new_numerator;
    int new_denominator;
    // Добавьте поля
};

int fractionfactor (int commonDenominator, int Denominator)
{
	return commonDenominator/Denominator;
}


int commonDenominator (int lhsDen, int rhsDen)
{
	int temp = 0;

	if (lhsDen == rhsDen)
	return lhsDen;
	else if (lhsDen > rhsDen)
	{
		if(lhsDen % rhsDen == 0)
		return lhsDen;
		else
		{
			int i = 2;
			do
			{
				temp = lhsDen * i;
				i++;
			}
			while (!(temp % rhsDen == 0));
			return temp;
		}
	}
	else
	{
	if(rhsDen % lhsDen == 0)
		return rhsDen;
		else
		{
			int i = 2;
			do
			{
				temp = rhsDen * i;
				i++;
			}
				while (!(temp % lhsDen == 0));
				return temp;
			}
	}


}

bool operator == (Rational lhs, Rational rhs) {

			int frictionfactorlhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), lhs.Denominator());
			int frictionfactorrhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), rhs.Denominator());


				return (lhs.Numerator() * frictionfactorlhs == rhs.Numerator() * frictionfactorrhs);
}

Rational operator + (Rational lhs, Rational rhs)
		{
				int frictionfactorlhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), lhs.Denominator());
				int frictionfactorrhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), rhs.Denominator());

			return {(lhs.Numerator() * frictionfactorlhs) + (rhs.Numerator() * frictionfactorrhs), commonDenominator(lhs.Denominator(), rhs.Denominator())};
		}

Rational operator - (Rational lhs, Rational rhs)
		{
					int frictionfactorlhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), lhs.Denominator());
					int frictionfactorrhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), rhs.Denominator());

				return {(lhs.Numerator() * frictionfactorlhs) - (rhs.Numerator() * frictionfactorrhs), commonDenominator(lhs.Denominator(), rhs.Denominator())};
		}

Rational operator / (Rational lhs, Rational rhs)
		{

			if(rhs.Numerator() * lhs.Denominator() == 0)
			{
				throw domain_error("Division by zero");
			}

		return {lhs.Numerator() * rhs.Denominator(), rhs.Numerator() * lhs.Denominator()};

		}

Rational operator * (Rational lhs, Rational rhs)
		{

		return {lhs.Numerator() * rhs.Numerator(), rhs.Denominator() * lhs.Denominator()};

		}

ostream& operator << (ostream & stream,const Rational & rational)
{
	stream << rational.Numerator() << '/' << rational.Denominator();
	return stream;
}

istream& operator >> (istream & stream, Rational & rational)
{
	int numerator = rational.Numerator();
	int denominator = rational.Denominator();

	stream >> numerator;
	stream.ignore(1);
	stream >> denominator;

	Rational temp{numerator,denominator};

	rational.setNumerator(temp.Numerator());
	rational.setDenominator(temp.Denominator());


	return stream;

}

bool operator < (const Rational & lhs,const Rational & rhs)
{
	int frictionfactorlhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), lhs.Denominator());
	int frictionfactorrhs = fractionfactor(commonDenominator(lhs.Denominator(), rhs.Denominator()), rhs.Denominator());



	return (lhs.Numerator() * frictionfactorlhs ) < (rhs.Numerator() * frictionfactorrhs );
}



int main() {

	string s;

	Rational lhs,rhs;
	try
	{
	cin >> lhs;
	cin.ignore(1);
	cin >> s;
	cin.ignore(1);
	cin >> rhs;



	if (s == "+")
	{
		cout << lhs + rhs;
	}
	else if(s == "-")
	{
		cout << lhs - rhs;
	}
	else if(s =="/")
	{	try
		{
		lhs / rhs;
		cout << lhs / rhs;
		}
		catch (domain_error& d)
		{
			cout << d.what();
		}
	}
	else if(s =="*")
	{
		cout << lhs * rhs;
	}
	}
	catch (invalid_argument& s)
	{
		cout << s.what();
		return 0;
	}


}
