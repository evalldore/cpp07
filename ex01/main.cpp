#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void print_type(T& a) {
	std::cout << '\t' << a << std::endl;
}

template<typename T>
void iter(T* a, size_t len, void(*func)(T&)) {
	for (size_t i = 0; i < len; i++) {
		func(a[i]);
	}
}

int main( void ) {
	std::cout << "Integer" << std::endl;
	int lol[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(lol, 10, print_type);

	std::cout << "Double" << std::endl;
	double piss[] = {1.0, 2.0, 3.0, 4.3, 5.0, 6.1, 7.9, 8.5, 9.1, 10.2};
	iter(piss, 10, print_type);

	std::cout << "Char" << std::endl;
	char fast[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	iter(fast, 10, print_type);

	std::cout << "String" << std::endl;
	std::string blast[] = {"lol", "ok", "wtf", "cool", "epic", "poopoo", "peepee"};
	iter(blast, 7, print_type);
	return 0;
}