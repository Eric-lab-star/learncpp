#include <iostream>
#include "main.h"

int main () {
	int a {ten()};
	std::cout << a + 10 << '\n';
	std::cout << a + 20 << '\n';
}


int ten() {
	return 10;
}
