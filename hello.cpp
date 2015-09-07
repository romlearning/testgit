#include <iostream>

void anotherfunc() {
	std::cout << "anotherfunc()" << std::endl;
}

void somefunc() {
	std::cout << "somefunc()" << std::endl;
}

int main() {
	std::cout << "Hello!" << std::endl;

	somefunc();

	return 0;

}

