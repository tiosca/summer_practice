#include "animal.hpp"
#include <iostream>

int Animal::counter = 0;

Animal::Animal()
{
	counter++;
	std::cout << "constrcut Animal FARA parametri;\n";

}

Animal::Animal(int age, char* nume, float weight)
{
	counter++;

	std::cout << "constrcut Animal cu parametri;\n";

	this->_age = age;
	_weight = weight;

	//pointerul (cem o copie la valoarea de la adresa ponterului)

	if (nume) {
		int l = strlen(nume);
		_nume = new char[l + 1];
		strcpy_s(_nume, l+1 ,nume);
	}
}

Animal::~Animal()
{
	counter--;

	std::cout << "Nume: ";
	if (_nume) {
		std::cout << _nume << std::endl;
	}
	else {
		std::cout << "undefined" << std::endl;
	}
	std::cout << "~Animal();\n";
	if (_nume)
		delete _nume;
}

void Animal::setAge(int age)
{
	_age = age;
}

void Animal::setNume(char* nume)
{
	if (nume) {
		int l = strlen(nume);
		_nume = new char[l + 1];
		strcpy_s(_nume, l + 1, nume);
	}
}

void Animal::setWeight(float weight)
{
	_weight = weight;
}

int Animal::getAge()
{
	return _age;
}

int Animal::getCounter()
{
	return counter;
}

char* Animal::getNume()
{
	return _nume;
}

float Animal::getWeight()
{
	return _weight;
}

void Animal::print()
{
	std::cout << "Nume: ";
	if (_nume) {
		std::cout << _nume << std::endl;
	}
	else {
		std::cout << "undefined" << std::endl;
	}

	std::cout << "Age: " << _age << std::endl;
	std::cout << "Weight: " << _weight << std::endl << std::endl;
}


