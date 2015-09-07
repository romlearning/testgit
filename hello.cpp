#include <iostream>

// some comment

void fourthfunc() {
	std::cout << "the fourthfunc() !" << std::endl;
}

void thirdfunc() {
	std::cout << "the third function" << std::endl;
}

void anotherfunc() {
	std::cout << "anotherfunc()" << std::endl;
}

void somefunc() {
	std::cout << "somefunc()" << std::endl;
}

int main() {
	std::cout << "Hello!" << std::endl;

	somefunc();
	anotherfunc();
	thirdfunc();

	return 0;

}

