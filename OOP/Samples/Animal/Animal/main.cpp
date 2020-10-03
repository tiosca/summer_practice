#include <iostream>
#include "animal.hpp"
#include "cat.h"


int main() {
	{
		std::cout << "Hello world!\n";

		std::cout << "Curent counter: " << Animal::getCounter() << "\n\n";


		Animal a1;
		a1.print();
		std::cout << "Curent counter: " << Animal::getCounter() << "\n\n";

		char* nume = new char[] {"georgel"};

		Animal a2(10, nume, 20);
		a2.print();
		std::cout << "Curent counter: " << Animal::getCounter() << "\n\n";

		delete[] nume;
		a2.print();
		std::cout << "Inainte de distrugerea scopului Curent counter: " << Animal::getCounter() << "\n\n";
	}
	std::cout << "Dupa scop Curent counter: " << Animal::getCounter() << "\n\n";

	Animal* a = new Animal(10,(char*) "alfred", 20);
	Cat c(10, (char*)"cat alfred", 20);
	c.print();
	std::cout << "Curent counter: " << Animal::getCounter() << "\n\n";
	delete a;
	
	std::cout << "Curent counter: " << Animal::getCounter() << "\n\n";



	return 0;
}