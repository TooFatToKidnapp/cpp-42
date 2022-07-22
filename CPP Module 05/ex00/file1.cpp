#include <iostream>

using std::cout;

int main()
{
	try
	{
	{
		int mage=30;
		int sage=30;
		if (sage > mage)
			throw 1;
		cout << "here1\n";
	}
	{
		int mage=50;
		int sage=520;
		if (sage == 0 || mage == 0)
			throw 2;
		cout << "here 2\n";
	}
	}
	catch(int x)
	{
		if (x == 1)
			std::cerr << "Error son older then mom" << '\n';
		else if (x == 2)
			std::cerr << "Error age set to 0" << '\n';
		else
			std::cerr << "Error \n";
	}

}

