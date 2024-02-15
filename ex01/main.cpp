#include <iostream>
#include "iter.hpp"

template<typename T>
void check(T& a) {
	std::cout << a << std::endl;
}

template<typename T>
void iter(T a[], size_t len, void(*func)(T&)) {
	for (size_t i = 0; i < len; i++) {
		func(a[i]);
	}
}

int main( void ) {
	int lol[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	iter(lol, 10, &check);
	return 0;
}