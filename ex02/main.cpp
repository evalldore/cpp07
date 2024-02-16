#include <iostream>
#include <string>
#include "Array.hpp"

static void strTest(void) {
	std::cout << "Strings test." << std::endl;
	Array<std::string> strArrays(4);

	strArrays[3] = "lol";
	try {
		strArrays[2] = "poor";
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	};

	Array<std::string> copy(strArrays);
	std::cout << "base: " << &strArrays << ' ' << strArrays << std::endl;
	std::cout << "copy: " << &copy << ' ' << strArrays << std::endl;
}

static void intTest(void) {
	std::cout << "Integer test." << std::endl;
	Array<int> intArrays(4);

	intArrays[0] = 1;
	intArrays[1] = 2;
	intArrays[2] = 3;
	intArrays[3] = 4;

	Array<int> copy(intArrays);
	std::cout << "base: " << &intArrays << ' ' << intArrays << std::endl;
	std::cout << "copy: " << &copy << ' ' << intArrays << std::endl;
}

static void exceptionsTest(void) {
	std::cout << "Exceptions test." << std::endl;
	Array<char> charArrays(10);

	try {
		charArrays[-1] = 'a';
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << charArrays << std::endl;
}

int main(void) {
	strTest();
	intTest();
	exceptionsTest();
}