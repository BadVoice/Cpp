#include <iostream>

using namespace std;

int main()
{

	enum USER_ATTEMPT : short int
	{
		first = 1,
		second,
		third
	};

	short int userPoints = 0;
	int userInputValue;

	std::cout << "Enter a number from 1 to 3\n";

	cin >> userInputValue;

	switch (userInputValue)
	{
	case first:
		userPoints = 1000;
		std::cout << "POINTS\n"
				  << userPoints;
		break;
	case second:
		userPoints = 500;
		std::cout << "POINTS\n"
				  << userPoints;
		break;
	case third:
		userPoints = 250;
		std::cout << "POINTS\n"
				  << userPoints;
		break;
	default:
		std::cout << "Invalid\n";
		break;
	}

	std::cout << "POINTS\n"
			  << userPoints;

	return 0;
}