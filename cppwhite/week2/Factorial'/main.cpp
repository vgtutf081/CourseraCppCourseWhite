#include <iostream>


	int factorial (int a)
	{
		int result = 1;

		if(a<1)
		{
			return 1;
		}
	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}

	return result;

	}

