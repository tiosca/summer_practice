#pragma once
#include <iostream>

class Person_Ex5 {
	int Age;
	int Height;
public:
	static int counter;

	Person_Ex5();

	void copyAgeFromAnotherPerson(Person_Ex5* p) {
		this->Age = p->Age;
	}

	Person_Ex5(int Age, int Height) {
		std::cout << "Apel constructor cu parametri" << std::endl;
		this->Age = Age;
		this->Height = Height;
		counter++;
	}

	~Person_Ex5() {
		std::cout << "Apel destructor" << std::endl;
		std::cout << "Counter Curent: " << --counter << std::endl;
	}

	void Write(){
		std::cout << "Age: " << this->Age << std::endl;
		std::cout << "Height: " << (*this).Height << std::endl;

	}

	static void SetAge(Person_Ex5* p, int value)
	{
		p->Age = value;
	}
};

int Person_Ex5::counter;

Person_Ex5::Person_Ex5() {
	std::cout << "Apel constructor fara parametri" << std::endl;
	this->Age = 10;
	Height = 100;
	counter++;
}

void exemplu_5(){
	Person_Ex5 p;
	std::cout << p.counter << std::endl;
	Person_Ex5 p1(50, 150);
	std::cout << Person_Ex5::counter << std::endl;

	p1.Write();
	//p1.copyAgeFromAnotherPerson(&p);
	Person_Ex5::SetAge(&p1, 55);
	p1.Write();



}