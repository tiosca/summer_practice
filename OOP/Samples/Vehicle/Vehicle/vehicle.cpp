#include "vehicle.hpp"
#include <string.h>
#include <iostream>

Vehicle::Vehicle()
{
	_name = nullptr;
	_color = nullptr;
}

Vehicle::Vehicle(char* name, char* color, int year)
{
	this->setName(name);
	setColor(color);
	setYear(year);
}

Vehicle::~Vehicle()
{
	if (_name) {
		delete _name;
	}

	if (_color) {
		delete _color;
	}
	std::cout << "s-o apelat destrucoru ~Vehicle\n\n" ;
}

char* Vehicle::getName()
{
	return _name;
}

char* Vehicle::getColor()
{
	return _color;
}

int Vehicle::getYear()
{
	return _year;
}

void Vehicle::print()
{
	std::cout << "Name: ";
	if (_name) {
		std::cout << _name << std::endl;
	}
	else {
		std::cout << "undefined" << std::endl;
	}


	std::cout << "Color: ";
	if (_color) {
		std::cout << _color << std::endl;
	}
	else {
		std::cout << "undefined" << std::endl;
	}



	std::cout << "Year: " << _year << std::endl << std::endl;
}

void Vehicle::setName(char* name)
{
	if (name) {
		int l = strlen(name);
		_name = new char[l + 1];
		strcpy_s(_name, l + 1, name);
	}
}

void Vehicle::setColor(char* color)
{
	if (color) {
		int l = strlen(color);
		_color = new char[l + 1];
		strcpy_s(_color, l + 1, color);
	}
}

void Vehicle::setYear(int year)
{
	_year = year;
}
