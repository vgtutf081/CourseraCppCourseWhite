#include <iostream>
using namespace std;
#include <cmath>

int main() {

	double a,b,c,d,xone,xtwo;

	cin >> a >> b >> c;

	if(a==0 && b==0)
	{
	return 0;
	}

	if(a==0)
	{
	xone = -1*(c/b);
	cout << xone << " ";
	return 0;
	}

	d = (b*b) - (4*a*c);

	if (d > 0)
	{
		xone = ((-1*b)+sqrt(d))/(2*a);
		xtwo = ((-1*b)-sqrt(d))/(2*a);
		cout << xone << " " << xtwo;
		return 0;
	}
	else if (d==0)
	{
		xone = (-1*b)/(2*a);
		cout << xone << " ";
		return 0;
	}

	else if (d < 0)
	{
	return 0;
	}



	return 0;


}
