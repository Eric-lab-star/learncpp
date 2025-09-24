#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	return input;
}

void printValue( int x, int y)
{
	std::cout << x << '\n';
	std::cout << y << '\n';
}

int main ()
{
	int x { getValueFromUser() };
	int y { getValueFromUser() };
	printValue(x, y);
	return 0;
}
