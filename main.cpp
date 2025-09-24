#include <iostream>
#include  "add.h"

int main ()
{
	int sum{mathfunctions::add(4, 4)};
	std::cout << sum << '\n';
	return 0;
}
