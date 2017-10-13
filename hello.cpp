#include <iostream>

#include "secfile.hpp" 
#include "thirdfile.hpp" 

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

void yetanother() {
	std::cout << "yet!!!" << std::endl;
}

int main() {
	std::cout << "Hello!" << std::endl;

	somefunc();
	anotherfunc();
	thirdfunc();
	asecondfilefunc();
	athirdfilefunc();
	
	std::cout << "Finally finished!" << std::endl;	

/////////////////
/////////////////
/////////////////	
	std::cout << "Yes!" << std::endl;

	return 0;

}

