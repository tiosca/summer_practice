#include <iostream>

struct Date {
	int x;
};

void setInt_1(Date d) {
	d.x = 5;
	std::cout << "Inside setInt_1: " << d.x << std::endl;
}

void setInt_2(Date *d) {
	d->x = 5;
	std::cout << "Pointerul meu este: " << &d << std::endl;
	std::cout << "Inside setInt_2: " << d->x << std::endl;

}

void setInt_3(Date &d) {
	d.x = 5;
	std::cout << "Inside setInt_3: " << d.x << std::endl;

}

void setInt_4(Date *&d) {
	d->x = 5;
	std::cout << "Pointerul meu este: " << &d << std::endl;
	std::cout << "Inside setInt_4: " << d->x << std::endl;

}

int main() {
	Date* ptr = new Date{ 10 };
	std::cout << ptr->x << std::endl;

	//setInt_1(*ptr);
	//std::cout << ptr->x << std::endl;

	std::cout << "Pointerul meu este: " << &ptr << std::endl;
	setInt_4(ptr);
	std::cout << ptr->x << std::endl;

	
}
